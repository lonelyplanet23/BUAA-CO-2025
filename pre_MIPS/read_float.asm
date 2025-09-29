.data
	newline: .asciiz "\n"
	prompt: .asciiz "Enter the value of PI:"
	zeroasfloat: .float 0.0
.text
.globl main
main:
	lwc1 $f4, zeroasfloat
	
	#prompt the user
	li $v0, 4
	la $a0, prompt
	syscall
	
	jal print_newline
	
	#Get the input 
	li $v0, 6 # $v0 模式为5 输入浮点数
	syscall 
	
	# Display the value 浮点数存在f0中！
	# 用add
	li $v0, 2
	add.s $f12, $f0, $f4
	syscall
	
	#exit
	li $v0, 10
	syscall
	
print_newline:
	li 	$v0, 4
	la	$a0, newline
	syscall
	jr 	$ra
