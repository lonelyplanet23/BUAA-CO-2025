.data
	array: .word 10, 2, 9
	length: .word 3
	sum:	.word 0
	avg:	.word 0
.text
	main:
	#第一步 初始化寄存器
		la $t0, array	# Base address
		li $t1, 0	# i = 0
		lw $t2, length	# $t2 = len
		li $t3, 0	# $t3 = sum
		
		sumLoop:
			lw $t4, ($t0)	# li $t4, array（$t0) $t4 = sum[i]
			add $t3, $t3, $t4	# sum = sum + array[i]
			
			add $t1, $t1, 1       # i = i+1
			add $t0, $t0, 4	      # Update the array address *p++
			blt $t1, $t2, sumLoop #循环条件 if i < len, then loop again
			
		sw $t3, sum
		
		#calculate the average
		div $t5, $t3, $t2
		sw $t5, avg
		
		#display
		li $v0, 1
		lw $a0, avg
		syscall
		
		
		li  $v0, 10
		syscall