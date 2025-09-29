.data
	newline: .asciiz "\n" #本质是伪代码
	val1:	.double 1.5
	val2:	.double 2.25
	
.text
.globl main

main:
	ldc1 $f2 val1	#双浮点数必须存储在偶数位
	ldc1 $f4 val2
	add.d $f12, $f2, $f4 #.d 对双浮点数计算
	
	li $v0,3
	syscall
	
	jal print_newline
	
	sub.d $f12, $f4, $f2
	li $v0, 3
	syscall
	
	jal print_newline
	
	mul.d $f12, $f4, $f2
	li $v0, 3
	syscall
	
	li $v0,10
	syscall
	
	
print_newline:
	li $v0, 11  # syscall 11 = 打印字符
	la $a0, 10  #10对应的是换行
	syscall
	jr $ra
	