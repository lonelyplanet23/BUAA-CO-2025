# full permutation of n (n <= 6)
.data 
    symbol: .word  0:8 # marks the position is used or not
    array:  .word  0:8
    n:      .word  0
    str_space: .asciiz " "
    nextLine: .asciiz "\n"

.macro addr(%dst, %src)
	# 计算索引的字节地址：%dst = %src * 4（左移2位）
	sll %dst, %src, 2
.end_macro

.macro print_nextLine
	# 打印换行
	la $a0, nextLine
	li $v0, 4
	syscall
.end_macro

.macro print_space
	# 打印空格
	la $a0, str_space
	li $v0, 4
	syscall
.end_macro


.macro print_int(%dst)
	# 打印整数（使用 $v0=1 系统调用）
	li $v0, 1
	move $a0, %dst
	syscall
.end_macro

.macro push(%dst)
	# 将寄存器 %dst 入栈
	addi $sp, $sp, -4
	sw %dst, 0($sp)
.end_macro
	
.macro pop(%dst)
	# 从栈顶恢复到寄存器 %dst
	lw %dst, 0($sp)
	addi $sp, $sp, 4
.end_macro


.text
    li $v0, 5
    syscall
    sw $v0, n

    lw $s0, n # s0 = n 

    li $a0, 0 
    jal full_array # full_array(0)

    li $v0, 10
    syscall

full_array:

    #保护
    push($ra)
    push($t0)
    push($t1)

    #接收传参, 变量设置
    move $t0, $a0  # t0 = step
    li   $t1, 0    # t1 = i (int i = 0)

    #函数主体 翻译 if 语句  
    blt $t0, $s0, set_step

    print: #翻译打印分支
        beq  $t1, $s0, end_print # if(i == n) break;

        addr($t2, $t1) # t2 = i << 2
        lw  $t5, array($t2) # $t5 = array[i]
        print_int($t5) # print(array[i])
        print_space

        addi $t1, $t1, 1 #i++
        j print

    end_print: 
        print_nextLine # print("\n")
        li  $t1, 0
        pop($t1)
        pop($t0)
        pop($ra)    
        jr $ra      #! return;
    
    set_step:
        beq  $t1, $s0, end_for  # if(i == n) break;

        addr($t2, $t1)
        lw  $t3, symbol($t2) # $t3 = symbol[i]
        bne $t3, $zero, used # if(symbol[i] != 0) skip the use
            
            
            
            # FullArray(step + 1);
            # symbol[i] = 0;
        addr($t3, $t0)  # $t3 = step << 2
        addi $t4, $t1, 1 # $t4 = i + 1
        sw $t4, array($t3) # array[step] = i + 1;

        addi $t5, $zero, 1
        sw $t5, symbol($t2) # symbol[i] = 1;

        addi $a0, $t0, 1  #! 参数设为step + 1 must use t0, a0 has been covered by the output
        jal full_array      # dfs(step+1)

        addr($t2, $t1)      #! t2 reloaded
        sw $zero, symbol($t2) # symbol[i] = 0;


        used:
            addi $t1, $t1, 1 #i++
            j set_step
    
    end_for:
        li  $t1, 0
        #! FILO
        pop($t1)
        pop($t0)
        pop($ra)    
        jr $ra      #! return;

















