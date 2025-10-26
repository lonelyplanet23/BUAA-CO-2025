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
	
		#将重要寄存器s0的值保存到栈中
		addi $sp, $sp, -4 # 将stack指针下移，空出一个整数类型
		sw $s0, 0($sp) #指令sw 保存
		
		#对s0执行操作
		addi $s0, $s0, 30
		
		li $v0, 1
		move $a0, $s0
		syscall
		
		#恢复s0的值
		lw $s0, 0($sp)
		addi $sp, $sp, 4
		
		
		jr $ra
		
	printTheValue:
		li $v0, 1
		move $a0, $s0
		syscall
		jr $ra