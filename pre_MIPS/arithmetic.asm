.data
	newline: .asciiz "\n"
.text
.globl main
main:
	#加法减法 临时变量法
	li 	$t0, 3
	li 	$t1, 5
	add	$t2, $t1, $t0
	sub	$t3, $t1, $t0
	mul	$t4, $t1, $t0
	#可以直接赋给a0 但不太好，之后需要处理多个变量
	
	#打印结果 需要把临时变量移动到系统调用变量
	#move用法：将第二个的值赋给第一个
	move	$a0, $t2
	li	$v0, 1
	syscall
	jal print_newline
	
	move	$a0, $t3
	li	$v0, 1
	syscall
	jal print_newline
	
	move	$a0, $t4
	li	$v0, 1
	syscall
	jal print_newline
	
	#addi、mult的使用
	#addi $目标寄存器, $源寄存器, 立即数
	# 把寄存器里的值和一个立即数相加，然后存回寄存器
	addi $t0, $zero, 2000
	addi $t1, $zero, 10
	#mult 适合于大数乘法，结果在hi(high) lo(low)两个特殊寄存器中
	mult $t0, $t1
	#move from low 将low中的数据移动到s0（储存用）
	mflo $s0 
	#display
	#另一种移动的方法 add $zero
	add $a0, $zero, $s0
	li $v0, 1
	syscall
	jal print_newline
	
	# 逻辑左移 shift left logical 
	#逻辑右移时最高位用 0，算术右移 sra 最高位用符号位填补。
	addi $s0, $zero, 4
	sll $t0, $s0, 2
	#disblay
	li $v0, 1
	add $a0, $zero, $t0
	syscall
	jal print_newline
	
	#除法 division
	addi $t0, $zero, 30
	addi $t1, $zero, 5
	div $s0, $t0, $t1
	#div $s0, $t0, 10  -- 两个寄存器和一个立即数
	#display
	li $v0, 1
	move $a0, $s0
	syscall
	jal print_newline
	
	
	#带余除法
	addi $t0, $zero, 30
	addi $t1, $zero, 5
	div $t0, $t1
	
	mflo $s0 #商
	mfhi $s1 #余数
	
	li $v0,1
	add $a0, $zero, $s0
	syscall
	jal print_newline
	
	li	$v0, 10
	syscall  


print_newline:
	li 	$v0, 4
	la	$a0, newline
	syscall
	jr	$ra