.data 
	message: .asciiz "hello world!:"
.text
	main:
		addi $a1, $zero, 50
		addi $a2, $zero, 100
		jal addNumbers
	
	li $v0, t0
	syscall
	
	addNumbers:
		add $v1, $a1, $a2
		jr $ra