.data
	message: .asciiz "After the while loop is done"
	newline: .asciiz "\n"
.text
main:
	# i = 0
	addi $t0, $zero, 0
	
	while:
	
		bgt $t0, 10, exit #分支条件
		#循环体
		jal printNumber
		jal printNewLine
		addi $t0, $t0, 1 # i++
		
		#利用跳跃回到循环体前
		j while 
		
	exit:
		li $v0, 4
		la $a0, message
		syscall
	
	
	li $v0, 10
	syscall
	
	printNumber:
		li $v0, 1
		move $a0, $t0
		syscall
		jr $ra
		
	printNewLine:
		li $v0, 4
		la $a0, newline
		syscall
		jr $ra