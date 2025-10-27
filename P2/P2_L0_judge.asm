.data
    str:    .byte 0: 88 
    strlen: .word 0
    ans:    .word 1
    .eqv    DATA_SIZE 4

.text
    #input(strlen)
    li $v0, 5
    syscall
    sw $v0, strlen

    lw $s0, strlen # $s0 = strlen
    li $t0, 0      # $t0 = i = 0
    
    ## input the str
    loop_in:
        li $v0, 12
        syscall
        sb $v0, str($t0)

        addi $t0, $t0, 1
        blt $t0, $s0, loop_in 

    li $t2, 1 # initiate flag = $t2 = 1
    li $t0, 0 # $t0 = i = 0
    lw $t1, strlen 
    addi $t1, $t1, -1 # $t1 = j = strlen-1

    loop:
        lb $t3, str($t0) # $t3 = str[i]
        lb $t4, str($t1) # $t4 = str[j]
        bne		$t3, $t4, fail	# if $t0 != $t1 then goto fail
        bge		$t0, $t1, out	# if $t0 >= $t1 then goto out
        
        addi $t0, $t0, 1
        addi $t1, $t1, -1
        j		loop				# jump to loop
        

    fail:
        li $t2, 0
        sw $t2, ans

    # output ans
    out:
        li $v0, 1
        lw $a0, ans
        syscall

li $v0, 10
syscall
