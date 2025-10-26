.data
	newline: .asciiz "\n"
.text
	main:
		addi  $s0, $zero, 10

		jal increaseMyRegister
		
		li $v0, 4
		la $a0, newline
		syscall
		
		jal printTheValue
		
	li $v0, 10
	syscall
	
	increaseMyRegister:
	
		#将重要寄存器s0 和main的ra的值保存到栈中
		addi $sp, $sp, -8  # 将stack指针下移，空出一个整数类型
		sw $s0, 0($sp) #指令sw 保存
		sw $ra, 4($sp)
		
		#对s0执行操作
		addi $s0, $s0, 30
		
		jal printTheValue #函数内调用另一个函数，需要保存 return address
		
		#恢复s0和main的ra的值
		lw $s0, 0($sp)
		lw $ra, 4($sp)
		addi $sp, $sp, 8
		
		
		jr $ra
		
	printTheValue:
		li $v0, 1
		move $a0, $s0
		syscall
		jr $ra