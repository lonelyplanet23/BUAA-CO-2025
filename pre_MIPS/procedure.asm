# 函数 method- function- procedure
.data
	message: .asciiz "hello world\n world say hello to you as well\n"
	

	
.text
.globl main

main:
	addi $a1, $zero, 50
	addi $a2, $zero, 100
	
	jal addNumbers
	
	li $v0, 1
	add $a0, $zero, $v1
	syscall
	
	#结束
	li $v0 10
	syscall
#label
addNumbers:
	#v1 是返回值
	add $v1, $a1, $a2
	jr $ra
	