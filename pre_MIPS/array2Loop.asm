.data
	myArray: .word 100:9 # 9 elements,and each element is 100
	newLine: .asciiz " "
.text
.text
	#initialize
	
	addi $s0, $zero, 4
	addi $s1, $zero, 10
	addi $s2, $zero, 12
	
	addi $t0, $zero, 0
	
	sw $s0, myArray($t0)
		addi $t0, $t0, 4 
	sw $s1, myArray($t0)
		addi $t0, $t0, 4
	sw $s2, myArray($t0)
	
	#Clear $t0 to 0 i=0
	addi $t0, $zero, 0
	
	while:
		beq $t0, 20, exit
		
		lw $t6, myArray($t0)
		
		li $v0, 1
		move $a0, $t6
		syscall
		
		li $v0, 4
		la $a0, newLine
		syscall
		
		#update and  jump
		addi $t0, $t0, 4
		j while
	
	exit:
		li $v0, 10
		syscall