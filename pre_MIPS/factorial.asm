.data
	prompt: .asciiz "Enter a number to find its factorial:"
	result: .asciiz "\n The factorial of the number is "
	num: 		.word	0
	ans:		.word	0
.text
	.globl main
	main:
		# input, and save the input to the num
		li $v0, 4
		la $a0, prompt
		syscall
		
		li $v0, 5
		syscall
		sw $v0, num
		
		# call factorial function
		lw $a0, num
		jal fact
		sw $v0, ans #传参使用v1,v0
		
		#output
		li $v0, 4
		la $a0, result
		syscall
		
		li $v0, 1
		lw $a0, ans
		syscall
		
		li $v0, 10
		syscall
#----------------------------------------------
# find  factorial function
.globl fact
fact:
	subu 	$sp, $sp, 4
	sw	$ra, ($sp)
	
	#base case
	li $v0, 1 # so the return value is 1
	beq $a0, 0, fact_End
	
	# find sthe factorial of n-1
	move $t0, $a0 # because you need n-1 and n, so you need to save the current n to s0
	sub $a0, $a0, 1
	jal fact
	
	# return  n * f(n-1)
	mul $v0, $t0, $v0
	
	fact_End:
		#restore the address and s0
		lw $ra, ($sp)
		addu $sp, $sp, 4
		jr $ra
		
	
	
				
		