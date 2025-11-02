.data
.text
.globl main
main:
ori $t1, $0, 0x1234
ori $t2, $0, 0x5678
ori $t3, $0, 0x9abc
ori $t4, $0, 0def0
ori $t0, $0, 0x0
# ===== Arithmetic instruction tests =====
# ori test
ori $t5, $0, 0
sw $t5, 0($t0)
addi $t0, $t0, 4
ori $t5, $0, 1
sw $t5, 0($t0)
addi $t0, $t0, 4
ori $t5, $0, 2
sw $t5, 0($t0)
addi $t0, $t0, 4
ori $t5, $0, 3
sw $t5, 0($t0)
addi $t0, $t0, 4
ori $t5, $0, 65533
sw $t5, 0($t0)
addi $t0, $t0, 4
ori $t5, $0, 65534
sw $t5, 0($t0)
addi $t0, $t0, 4
ori $t5, $0, 65535
sw $t5, 0($t0)
addi $t0, $t0, 4
ori $t5, $0, 25779
sw $t5, 0($t0)
addi $t0, $t0, 4
ori $t5, $0, 42528
sw $t5, 0($t0)
addi $t0, $t0, 4
ori $0, $t1, 0xffff
sw $0, 0($t0)
addi $t0, $t0, 4
# lui test
lui $t6, 4660
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
lui $t6, 32768
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
lui $t6, 65535
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
lui $t6, -2
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
lui $t6, -1
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
lui $t6, 0
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
lui $t6, 1
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
lui $t6, 2
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
lui $t6, -32768
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
lui $t6, -32767
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
lui $t6, 32766
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
lui $t6, 32767
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
lui $t6, -5329
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
lui $t6, 25299
sw $t6, 0($t0)
addi $t0, $t0, 4
ori $t6, $t6, 0x7890
sw $t6, 0($t0)
addi $t0, $t0, 4
# add test
li $t7, 1
li $t8, 2
add $t9, $t7, $t8
sw $t9, 0($t0)
addi $t0, $t0, 4
li $t7, -1
li $t8, -2
add $t9, $t7, $t8
sw $t9, 0($t0)
addi $t0, $t0, 4
li $t7, 2147483647
li $t8, 1
add $t9, $t7, $t8
sw $t9, 0($t0)
addi $t0, $t0, 4
li $t7, -2147483648
li $t8, -1
add $t9, $t7, $t8
sw $t9, 0($t0)
addi $t0, $t0, 4
li $t7, -1000786109
li $t8, 1919156834
add $t9, $t7, $t8
sw $t9, 0($t0)
addi $t0, $t0, 4
# sub test
li $s0, 1
li $s1, 2
sub $s2, $s0, $s1
sw $s2, 0($t0)
addi $t0, $t0, 4
li $s0, -1
li $s1, -2
sub $s2, $s0, $s1
sw $s2, 0($t0)
addi $t0, $t0, 4
li $s0, 2147483647
li $s1, 1
sub $s2, $s0, $s1
sw $s2, 0($t0)
addi $t0, $t0, 4
li $s0, -2147483648
li $s1, -1
sub $s2, $s0, $s1
sw $s2, 0($t0)
addi $t0, $t0, 4
li $s0, -1000786109
li $s1, 1919156834
sub $s2, $s0, $s1
sw $s2, 0($t0)
addi $t0, $t0, 4
# 
===== Randomized lw/sw tests =====
# Random test: base_reg=$26, base=0x13b5, offset=-3142, address=0x76f
li $26, 5045
li $2, 0x72522775
sw $2, -3142($26)
lw $6, -3142($26)
sw $6, 0($t0)
addi $t0, $t0, 4
# Random test: base_reg=$4, base=0x25ce, offset=491, address=0x27b9
li $4, 9678
li $26, 0xb7fca0ba
sw $26, 491($4)
lw $4, 491($4)
sw $4, 0($t0)
addi $t0, $t0, 4
# 
===== Randomized beq/j tests =====
# beq test 0: $19=0xa318edbb, $23=0xa318edbb, jump if equal
li $19, 0xa318edbb
li $23, 0xa318edbb
beq $19, $23, beq_target_0
li $4, 0x4d2e83e7
j beq_end_0
beq_target_0:
li $4, 0x7ce6ef65
beq_end_0:
sw $4, 0($t0)
addi $t0, $t0, 4
# beq test 1: $25=0xfb485e71, $31=0xfb485e71, jump if equal
li $25, 0xfb485e71
li $31, 0xfb485e71
beq $25, $31, beq_target_1
li $18, 0x87befa0
j beq_end_1
beq_target_1:
li $18, 0x80037886
beq_end_1:
sw $18, 0($t0)
addi $t0, $t0, 4
# beq test 2: $5=0x3363e2c7, $29=0x3363e2c7, jump if equal
li $5, 0x3363e2c7
li $29, 0x3363e2c7
beq $5, $29, beq_target_2
li $5, 0x5fd15e31
j beq_end_2
beq_target_2:
li $5, 0xbc482d9e
beq_end_2:
sw $5, 0($t0)
addi $t0, $t0, 4
# beq test 3: $24=0xfb271525, $21=0xfb271525, jump if equal
li $24, 0xfb271525
li $21, 0xfb271525
beq $24, $21, beq_target_3
li $16, 0xd83a73c0
j beq_end_3
beq_target_3:
li $16, 0x7bc06164
beq_end_3:
sw $16, 0($t0)
addi $t0, $t0, 4
# beq test 4: $23=0x77ec1aed, $13=0x22b77017, no jump if not equal
li $23, 0x77ec1aed
li $13, 0x22b77017
beq $23, $13, beq_target_4
li $6, 0x66ad3856
j beq_end_4
beq_target_4:
li $6, 0x8d074b8
beq_end_4:
sw $6, 0($t0)
addi $t0, $t0, 4
# j 0: forward jump
j j_target_0
li $28, 0xbb017930
j_target_0:
li $28, 0xb0816df9
sw $28, 0($t0)
addi $t0, $t0, 4
# j 1: backward jump
j_target_1:
j j_target_1
li $2, 0x87c985f7
li $2, 0x7d2d0e86
sw $2, 0($t0)
addi $t0, $t0, 4
# j 2: backward jump
j_target_2:
j j_target_2
li $6, 0x63e889ae
li $6, 0x42b9fa79
sw $6, 0($t0)
addi $t0, $t0, 4
li $v0, 10
syscall