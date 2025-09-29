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
	
	#Get the input 
	li $v0, 5 # $v0 模式为5 输入整数
	syscall 
	
	#将输入的数据放在t0
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