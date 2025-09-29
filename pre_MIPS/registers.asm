.data
	newLine: .asciiz "\n"

.text
	main:
		add $s0, $zero, 10
		jal increaseMyRegister
		
		#print value!
		li $v0, 1
		move $a0, $s0
		syscall
		
	li $v0,10
	syscall
	
	increaseMyRegister:
	# $sp stack pointer
	# 意在栈上腾出 4 字节的空间。一个 word 是 4 字节,一般以4为单位
		addi $sp, $sp, -8
	# 将s0的数据，save words 保存在stack pointer的第0个位置（即stack pointer当前指的地址）
		sw $s0, 0($sp)
	#将main函数地址也存储进来，在第4个位置,这样防止嵌套内的函数$ra回到了Main函数中
		sw $ra, 4($sp)
		
		addi $s0, $s0, 30
		
	# 函数内调用其他函数
		# 这一句会将此处地址放在ra中
		# 如果没有将main函数位置恢复，那么结尾jr 又会跳到此函数中
		jal printNum
	
	# 将stack pointer的第0个位置（即stack pointer当前指的地址）的数据读取到寄存器中的s0	
	# 也就是说我把原先的数据又读取回来了
		lw $a0, 0($sp)
		lw $ra, 4($sp)
	#释放4字节
		addi $sp, $sp, 8
		jr $ra
	
	printNum:
		li $v0, 1
		move $a0, $s0
		syscall
		jr $ra
		
		