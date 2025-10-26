.data
	matrix1:	.word 0:65
	matrix2:	.word 0:65
	ans:	.word 0:65
	n:	.word 0	
	.eqv 	DATA_SIZE_SHIFT 2
	str_space: .asciiz " "
	nextLine: .asciiz  "\n"
	
.macro calc_addr(%dst, %row, %col, %size)
	mult %row, %size
	mflo %dst
	add  %dst, %dst, %col
	sll  %dst, %dst, DATA_SIZE_SHIFT
.end_macro

.text
	#input n
	li $v0, 5
	syscall
	sw $v0, n
	lw $s0, n   # s0 = size
	
	read_matrix1:
		li $t0, 0 # t0 = i = 0
		loop_i_1:
			li $t1, 0 # t1 = j = 0
			loop_j_1:
				# 输入
				li $v0, 5
				syscall
				calc_addr($t2, $t0, $t1, $s0)
				sw $v0, matrix1($t2)		
				addi  $t1, $t1,  1
				blt   $t1, $s0, loop_j_1
			addi $t0, $t0, 1
			blt $t0, $s0, loop_i_1
	read_matrix2:
		li $t0, 0 # t0 = i = 0
		loop_i_2:
			li $t1, 0 # t1 = j = 0
			loop_j_2:
				# 输入
				li $v0, 5
				syscall
				calc_addr($t2, $t0, $t1, $s0)
				sw $v0, matrix2($t2)		
				addi  $t1, $t1,  1
				blt   $t1, $s0, loop_j_2
			addi $t0, $t0, 1
			blt $t0, $s0, loop_i_2
	
	matrix_mult:
		li $t0, 0 # t0 = i = 0
		loop_i_3:
			li $t1, 0 # t1 = j = 0
			loop_j_3:
				li $t2, 0 # t2 = k = 0
				li $t9, 0 # t9 = s[i][j] = 0 init
				loop_k:
					# s[i][j] = sigma a[i][k] * b[k][j] (k=0,1,..,n-1)
					calc_addr($t5, $t0, $t2, $s0) 
					lw	$t7, matrix1($t5)# t7 = a[i][k]
					calc_addr($t6, $t2, $t1, $s0) 
					lw	$t8, matrix2($t6)# t8 = b[k][j]
					
					mulu $t3, $t7, $t8 # 重新赋值t3 = a[i][j+k] * b[i+k][j]
					add  $t9, $t9, $t3					
					addi	$t2, $t2, 1
					blt	$t2, $s0, loop_k	
				
				calc_addr($t3, $t0, $t1, $s0) 
				sw	$t9, ans($t3)# save ans[i][j]
				
				addi  $t1, $t1,  1
				blt   $t1, $s0, loop_j_3
			addi $t0, $t0, 1
			blt $t0, $s0, loop_i_3			
	output:
		li $t0, 0 # t0 = i = 0
		loop_i_4:
			li $t1, 0 # t1 = j = 0
			loop_j_4:
				# 输出
				calc_addr($t2, $t0, $t1, $s0)
				li $v0, 1
				lw $a0, ans($t2)
				syscall
				
				li $v0, 4
				la $a0, str_space
				syscall
				
				addi  $t1, $t1,  1
				blt   $t1, $s0, loop_j_4
				
			li $v0, 4
			la $a0, nextLine	
			syscall
			
			addi $t0, $t0, 1
			blt $t0, $s0, loop_i_4		
	
	li $v0, 10
	syscall
