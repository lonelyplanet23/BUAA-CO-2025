.data
    # 矩阵定义：最大维度10x10，预留足够空间
    f:      .word 0:100     # 待卷积矩阵f (m1×n1)，最大10×10=100元素
    h:      .word 0:100     # 卷积核h (m2×n2)，最大10×10=100元素
    g:      .word 0:81      # 结果矩阵g，最大(10-1)×(10-1)=81元素
    # 输出分隔符
    str_space: .asciiz " "
    str_newline: .asciiz "\n"

# 宏定义：计算矩阵元素的内存地址（行优先存储）
# %dst: 目标寄存器（存储计算后的字节地址）
# %row: 行索引
# %col: 列索引
# %cols: 矩阵总列数
.macro calc_matrix_addr(%dst, %row, %col, %cols)
    mult    %row, %cols     # 行偏移 = 行索引 × 总列数
    mflo    %dst            # 结果存入%dst
    add     %dst, %dst, %col# 总偏移 = 行偏移 + 列索引
    sll     %dst, %dst, 2   # 转换为字节地址（.word占4字节，左移2位）
.end_macro

.text
    # -------------------------- 1. 读取输入参数 --------------------------
    # 1.1 读取待卷积矩阵维度 m1, n1
    li      $v0, 5          # 系统调用：读取整数
    syscall
    move    $s0, $v0        # $s0 = m1（待卷积矩阵行数）
    
    li      $v0, 5
    syscall
    move    $s1, $v0        # $s1 = n1（待卷积矩阵列数）
    
    # 1.2 读取卷积核维度 m2, n2
    li      $v0, 5
    syscall
    move    $s2, $v0        # $s2 = m2（卷积核行数）
    
    li      $v0, 5
    syscall
    move    $s3, $v0        # $s3 = n2（卷积核列数）
    
    # 1.3 计算结果矩阵维度 out_m = m1 - m2 + 1, out_n = n1 - n2 + 1
    sub     $s4, $s0, $s2
    addi    $s4, $s4, 1     # $s4 = out_m（结果矩阵行数）
    
    sub     $s5, $s1, $s3
    addi    $s5, $s5, 1     # $s5 = out_n（结果矩阵列数）

    # -------------------------- 2. 读取待卷积矩阵f --------------------------
    li      $t0, 0          # $t0 = f的行索引 i (0 ~ m1-1)
read_f_row:
    bge     $t0, $s0, read_f_end  # i >= m1 时结束读取
    
    li      $t1, 0          # $t1 = f的列索引 j (0 ~ n1-1)
read_f_col:
    bge     $t1, $s1, read_f_col_end  # j >= n1 时结束当前行
    
    # 读取f[i][j]的值并存储
    li      $v0, 5
    syscall
    calc_matrix_addr($t2, $t0, $t1, $s1)  # 计算f[i][j]的字节地址
    sw      $v0, f($t2)     # 存入f矩阵
    
    addi    $t1, $t1, 1     # j++
    j       read_f_col
read_f_col_end:
    addi    $t0, $t0, 1     # i++
    j       read_f_row
read_f_end:

    # -------------------------- 3. 读取卷积核h --------------------------
    li      $t0, 0          # $t0 = h的行索引 k (0 ~ m2-1)
read_h_row:
    bge     $t0, $s2, read_h_end  # k >= m2 时结束读取
    
    li      $t1, 0          # $t1 = h的列索引 l (0 ~ n2-1)
read_h_col:
    bge     $t1, $s3, read_h_col_end  # l >= n2 时结束当前行
    
    # 读取h[k][l]的值并存储
    li      $v0, 5
    syscall
    calc_matrix_addr($t2, $t0, $t1, $s3)  # 计算h[k][l]的字节地址
    sw      $v0, h($t2)     # 存入h矩阵
    
    addi    $t1, $t1, 1     # l++
    j       read_h_col
read_h_col_end:
    addi    $t0, $t0, 1     # k++
    j       read_h_row
read_h_end:

    # -------------------------- 4. 卷积计算核心 --------------------------
    # 结果矩阵g[x][y] = sum(f[x+k][y+l] * h[k][l])  (k=0~m2-1, l=0~n2-1)
    li      $t0, 0          # $t0 = g的行索引 x (0 ~ out_m-1)
calc_g_row:
    bge     $t0, $s4, calc_g_end  # x >= out_m 时结束计算
    
    li      $t1, 0          # $t1 = g的列索引 y (0 ~ out_n-1)
calc_g_col:
    bge     $t1, $s5, calc_g_col_end  # y >= out_n 时结束当前行
    
    li      $t7, 0          # $t7 = 累加器，初始化g[x][y]为0
    
    # 遍历卷积核h的行k
    li      $t2, 0          # $t2 = h的行索引 k (0 ~ m2-1)
calc_h_k:
    bge     $t2, $s2, calc_h_k_end  # k >= m2 时结束当前k循环
    
    # 遍历卷积核h的列l
    li      $t3, 0          # $t3 = h的列索引 l (0 ~ n2-1)
calc_h_l:
    bge     $t3, $s3, calc_h_l_end  # l >= n2 时结束当前l循环
    
    # 1. 计算f[x+k][y+l]的地址并取值
    add     $t4, $t0, $t2   # f的行索引 = x + k
    add     $t5, $t1, $t3   # f的列索引 = y + l
    calc_matrix_addr($t6, $t4, $t5, $s1)  # 计算f[x+k][y+l]地址
    lw      $t8, f($t6)     # $t8 = f[x+k][y+l]
    
    # 2. 计算h[k][l]的地址并取值
    calc_matrix_addr($t6, $t2, $t3, $s3)  # 计算h[k][l]地址
    lw      $t9, h($t6)     # $t9 = h[k][l]
    
    # 3. 乘累加：sum += f * h
    mult    $t8, $t9        # 计算f*h
    mflo    $t6             # 乘积存入$t6（输入范围小，无需考虑溢出）
    add     $t7, $t7, $t6   # 累加至$t7（g[x][y]的临时值）
    
    addi    $t3, $t3, 1     # l++
    j       calc_h_l
calc_h_l_end:
    addi    $t2, $t2, 1     # k++
    j       calc_h_k
calc_h_k_end:
    
    # 4. 存储g[x][y]的结果
    calc_matrix_addr($t2, $t0, $t1, $s5)  # 计算g[x][y]的字节地址
    sw      $t7, g($t2)     # 将累加结果存入g矩阵
    
    addi    $t1, $t1, 1     # y++
    j       calc_g_col
calc_g_col_end:
    addi    $t0, $t0, 1     # x++
    j       calc_g_row
calc_g_end:

    # -------------------------- 5. 输出结果矩阵g --------------------------
    li      $t0, 0          # $t0 = g的行索引 x (0 ~ out_m-1)
print_g_row:
    bge     $t0, $s4, print_g_end  # x >= out_m 时结束输出
    
    li      $t1, 0          # $t1 = g的列索引 y (0 ~ out_n-1)
print_g_col:
    bge     $t1, $s5, print_g_col_end  # y >= out_n 时结束当前行
    
    # 输出g[x][y]的值
    calc_matrix_addr($t2, $t0, $t1, $s5)  # 计算g[x][y]地址
    lw      $a0, g($t2)     # 加载要输出的值
    li      $v0, 1          # 系统调用：输出整数
    syscall
    
    # 输出空格（最后一个元素后也输出空格，符合样例格式）
    li      $v0, 4
    la      $a0, str_space
    syscall
    
    addi    $t1, $t1, 1     # y++
    j       print_g_col
print_g_col_end:
    # 输出换行（当前行结束）
    li      $v0, 4
    la      $a0, str_newline
    syscall
    
    addi    $t0, $t0, 1     # x++
    j       print_g_row
print_g_end:

    # -------------------------- 程序结束 --------------------------
    li      $v0, 10
    syscall