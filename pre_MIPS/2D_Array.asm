.data
	arr:	.word 2, 5, 8
		.word 3, 7, 10
		.word 1, 4, 11
		
	size:	.word 3
	.eqv	DATA_SIZE 4 # define integer - 4  double - 8
	
.text
	main:
		la $a0, arr
		lw $a1, size # $a1 = size
		
		jal sumDiagonal
		move $a0, $v0 #传参
		
		li $v0, 1
		syscall
		
	li $v0 10
	syscall
	
	sumDiagonal:
		li $v0, 0 # sum = 0 初始化返回值
		li $t0, 0 # $t0 as the index
		
		sumLoop:
			# 计算当前指针
			mul $t1, $t0, $a1 # t1 = rowIndex * colsize
			add $t1, $t1, $t0 # t1 = rowIndex * colsize  + colIndex
			mul $t1, $t1, DATA_SIZE # t1 = 目前二维数组地址offset
			add $t1, $t1, $a0 # + base address t1 = 当前指针
			
			lw $t2, ($t1)
			add $v0, $v0, $t2	# sum = sum + a[i][i]
			
			addi $t0, $t0, 1
			blt $t0, $a1, sumLoop		# if i < size then loop again
		jr $ra