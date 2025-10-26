.data
	message: .asciiz "The number is less than the other"
.text
	addi $t0, $zero, 400
	addi $t1, $zero, 200
	
	# set less than
	slt $s0, $t0, $t1
	# branch 
	beq $s0, 1, printMessage
	
	li $v0, 10
	syscall
	
printMessage:
	li $v0, 4
	la $a0, message
	syscall
	
	