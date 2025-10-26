.data
	newline: .asciiz "\n"
	prompt: .asciiz "Enter Your Age:"
	message: .asciiz "Your age is:"
	
.text
.globl main
main:
	#prompt the user
	li $v0, 4
	la $a0, prompt
	syscall
	
	jal print_newline
	
	# get the input
	li $v0, 5
	syscall
	
	move $t0, $v0
	
	#display the message
	li $v0, 4
	la $a0, message
	syscall
	
	#print or show the age
	li $v0, 1
	move $a0, $t0
	syscall
	
	#exit
	li $v0, 10
	syscall
	
print_newline:
	li 	$v0, 4
	la	$a0, newline
	syscall
	jr 	$ra
