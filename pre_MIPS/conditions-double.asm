.data
	message: .asciiz "it was false\n"
	message2: .asciiz "it was true\n"
	number1: .float 4.6
	number2: .float 4.6
.text
	main:
		lwc1 $f0, number1
		lwc1 $f2, number2
		
		c.eq.s $f0, $f2
		
		bc1t exit #ÅÐ¶ÏÊÇ·ñÎªÕæ                                                                         
		
		li $v0, 4
		la $a0, message
		syscall
		
	li $v0, 10
	syscall
	
	exit:
		li $v0, 4
		la $a0, message2
		syscall	
	