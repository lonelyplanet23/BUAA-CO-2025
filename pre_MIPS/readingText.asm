.data
	message: .asciiz "hello,"
	userInput: .space 20
.text
	main:
		#读字符串模式 $v0 = 8         
		#$a0 = 缓冲区地址  # 存放用户输入的目标地址（缓冲区的起点）
		#$a1 = 最大读取长度

		li $v0, 8 #输入text 模式为8
		la $a0, userInput  #获取输入放到RAM的指定地址中
		li $a1, 20 #文本的最大长度 1 byte = 1字符
		syscall
		
		li $v0, 4
		la $a0, message
		syscall
		
		li $v0, 4
		la $a0, userInput
		syscall
		
	li $v0, 10
	syscall	