.data
A:      .space 64          
msg: .asciiz "Out of bounds\n"

.text
main:

    # 读取矩阵A（16个整数）
    la $t0, A              # t0 指向矩阵A起始地址
    li $t1, 16            
read_loop:
    beqz $t1, read_done
    li $v0, 5              
    syscall
    sw $v0, 0($t0)         # 存入矩阵
    addi $t0, $t0, 4       # 地址后移4字节
    addi $t1, $t1, -1
    j read_loop
read_done:

    li $v0, 5
    syscall
    move $s0, $v0          # s0 = m
    li $v0, 5
    syscall
    move $s1, $v0          # s1 = n
    li $v0, 5
    syscall
    move $s2, $v0          # s2 = i
    li $v0, 5
    syscall
    move $s3, $v0          # s3 = j

    # 判断越界：i+m > 4 或 j+n > 4
    add $t2, $s0, $s2      # t2 = m + i
    add $t3, $s1, $s3      # t3 = n + j
    bgt $t2, 4, out_of_bounds
    bgt $t3, 4, out_of_bounds

    # 输出子矩阵
    la $t0, A              # A 基址
    move $t4, $s2          # row = i

row_loop:
    beq $t4, $t2, end_prog # 行到达 i+m 时退出

    move $t5, $s3          # col = j

col_loop:
    beq $t5, $t3, next_row

    # 计算偏移量 offset = (row*4 + col)*4
    mul $t6, $t4, 4
    add $t6, $t6, $t5
    sll $t6, $t6, 2        # ×4字节
    add $t7, $t0, $t6
    lw $a0, 0($t7)

    # 打印整数
    li $v0, 1
    syscall

    # 打印空格
    li $v0, 11
    li $a0, 32             
    syscall

    addi $t5, $t5, 1
    j col_loop

next_row:
    # 换行
    li $v0, 11
    li $a0, 10
    syscall

    addi $t4, $t4, 1
    j row_loop

    # 越界处理
out_of_bounds:
    li $v0, 4
    la $a0, msg
    syscall

end_prog:
    li $v0, 10
    syscall
