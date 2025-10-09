# .data 包含程序所有的数据部分，就像c语言中的 变量、
# .data 段里是的标签，相当于一个字符串常量在 内存 (RAM) 中的起始地址
.data
	
	#这里 myMessage 是字符串 "Hello World\n" 的首地址。
	myMessage:	.asciiz "Hello World\n"
	#.byte 类型  一个字节 -128 - 127 存储一个字符 类似于char
	myCharacter: 	.byte 'm'
	# .word类型  字 = 4字节(byte) 整数需要4字节
	age:		.word 23
	
	#换行符
	newline:	.asciiz "\n"
	
	# .float 类型
	PI: 		.float 3.14
	
	# .double类型
	myDouble:	.double 8.902
	zeroDouble:	.double 0.0
	# array类型
	
	
# 文本部分包含所有的指令 
.text
	# 连接加载指令，4--打印字符串
	li $v0, 4
	# Load Address: 将标签 myMessage 对应的内存地址加载到寄存器 $a0 中
	la $a0, myCharacter
	syscall # $v0 -- what action do we take 
	jal print_newline
	
	#v0 的值为1， 打印整数
	li $v0, 1
	lw $a0, age
	syscall
	
	#jal = Jump And Link
	#会跳转到 print_newline 标签执行，并自动把返回地址保存到 $ra
	jal print_newline
	
	#v0的值为2， 打印浮点数
	#浮点数存储在core processor 1 需要用 load word from Coprocessor 1wc1
	li 	$v0, 2
	lwc1	$f12, PI
	syscall
	
	jal print_newline
	
	ldc1	$f2, myDouble
	ldc1	$f0, zeroDouble
	
	li	$v0, 3
	add.d	$f12,$f2,$f0
	syscall
	
	li	$v0, 10 #10 = exit
	syscall
	
print_newline:
	li 	$v0, 4
	la	$a0, newline
	syscall
	# Jump Register $ra，就是调用点的下一条指令。
	# $ra return address, 返回到调用点的地址
	jr 	$ra
