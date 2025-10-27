.data
    str_space:  .asciiz " "
    nextLine:   .asciiz "\n"

    matrix1:    .word   0:144
    matrix2:    .word   0:144

    ans:        .word   0:144
    m1:         .word   0
    n1:         .word   0
    m2:         .word   0
    n2:         .word   0 
    

.macro calc_addr(%dst, %row, %col, %sizeOfCol)
    mult    %row, %sizeOfCol
    mflo    %dst
    add     %dst, %dst, %col
    sll		%dst, %dst, 2		# $t0 = $t1 << 0
.end_macro

.text
    #input m1, n1, m2, n2
    li $v0, 5
    syscall
    sw $v0, m1

    li $v0, 5
    syscall
    sw $v0, n1

    li $v0, 5
    syscall
    sw $v0, m2

    li $v0, 5
    syscall
    sw $v0, n2


    lw $s0, m1   # $s0 = m1
    lw $s1, n1   # $s1 = n1
    lw $s2, m2   # $s2 = m2
    lw $s3, n2   # $s3 = n2

    # input matrix1
    li $t0, 0 # t0 = i = 0
    loop_i_1:
        li      $t1, 0 # t1 = j = 0
        loop_j_1:
            li      $v0, 5
            syscall
            calc_addr($t2, $t0, $t1, $s1)
            sw      $v0, matrix1($t2)   # input(matrix[i][j])

            addi    $t1, $t1, 1 
            blt     $t1, $s1, loop_j_1  
            
        addi    $t0, $t0, 1
        blt     $t0, $s0, loop_i_1
    
    # input matrix2
    li $t0, 0 # t0 = i = 0
    loop_i_2:
        li      $t1, 0 # t1 = j = 0
        loop_j_2:
            li      $v0, 5
            syscall
            calc_addr($t2, $t0, $t1, $s3)
            sw      $v0, matrix2($t2)   # input(matrix[i][j])

            addi    $t1, $t1, 1 
            blt     $t1, $s3, loop_j_2  
            
        addi    $t0, $t0, 1
        blt     $t0, $s2, loop_i_2

    # matrix convolution
    sub $s4, $s0, $s2 # s4 = m1-m2
    sub $s5, $s1, $s3 # s5 = n1-n2

    li $t0, 0
    loop_i: 
        li  $t1, 0
        loop_j:
            li $t2, 0 # t2 = k = 0
            li $t8, 0  # t8 = g[i][j] = 0
            loop_k:
                li $t3, 0 # t3 = l = 0
                    loop_l:
                        add     $t4, $t0, $t2 # t4 = i+k
                        add     $t5, $t1, $t3 # t5 = j+l
                        calc_addr($t6, $t4, $t5, $s1) # t6 = offset of f[i+k][j+l]
                        calc_addr($t7, $t2, $t3, $s3) # t7 = offset of g[k][l]

                        lw      $t4, matrix1($t6) # load f[i+k][j+l]
                        lw      $t5, matrix2($t7) # load g[k][l]
                        mul     $t6, $t4, $t5   # t6 = f[i+k][j+l] * g[k][l]
                        add     $t8, $t8, $t6   # g[i][j] += f[i+k][j+l] * g[k][l]

                        addi    $t3, $t3, 1
                        blt     $t3, $s3, loop_l
                addi    $t2, $t2, 1
                blt     $t2, $s2, loop_k

            addi     $t9, $s5, 1    # t9 = n1 - n2 + 1
            calc_addr($t4, $t0, $t1, $t9) # t4 = offset of ans[i][j] #! ?????????s5
            sw      $t8, ans($t4)    # ans[i][j] = g[i][j]
            

            addi    $t1, $t1, 1
            ble		$t1, $s5, loop_j

        addi    $t0, $t0, 1
        ble		$t0, $s4, loop_i	# if $t0 <= $s4 then goto loop_i

    # output ans matrix
    li $t0, 0 # t0 = i = 0
    loop_i_out:
        li      $t1, 0 # t1 = j = 0
        loop_j_out:
            addi     $t9, $s5, 1   # t9 = n1 - n2 + 1
            calc_addr($t2, $t0, $t1, $t9) # t2 = offset of ans[i][j]
            lw      $a0, ans($t2)    # load ans[i][j]
            li      $v0, 1
            syscall

            # print space
            li      $v0, 4
            la      $a0, str_space
            syscall

            addi    $t1, $t1, 1
            ble     $t1, $s5, loop_j_out

        # print new line
        li      $v0, 4
        la      $a0, nextLine
        syscall

        addi    $t0, $t0, 1
        ble     $t0, $s4, loop_i_out

li $v0, 10
syscall
