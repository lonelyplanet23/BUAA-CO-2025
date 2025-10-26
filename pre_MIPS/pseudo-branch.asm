.data
	message: .asciiz "Hi, How are you"
.text
	main:
		addi $s0, $zero, 14
		addi $s1, $zero, 10
		
		#集成多个指令 不需要先设，再判断相等
		bgtz $s0, displayHi
		
		li $v0, 10
		syscall
	
	displayHi:
		li $v0, 4
		la $a0, message
		syscall
		