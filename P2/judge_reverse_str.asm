.data
str: .byte 0:21  # 存储输入字符串，最大长度20，

.text
# 1. 读取字符串长度n
li      $v0, 5          # 系统调用：读取整数
syscall
move    $s0, $v0        # $s0 = 字符串长度n

# 2. 读取n个字符，存入str数组
li      $t0, 0          # $t0 = 字符索引i，初始为0
read_loop:
bge     $t0, $s0, read_end  # 若i >= n，结束读取
li      $v0, 12         # 系统调用：读取单个字符（无换行符）
syscall
sb      $v0, str($t0)   # 将读取的字符存入str[i]
addi    $t0, $t0, 1     # 索引i自增1
j       read_loop
read_end:

# 3. 回文判断：首尾指针相向比较
li      $t1, 0          # $t1 = 左指针left，初始0
addi    $t2, $s0, -1    # $t2 = 右指针right，初始n-1
li      $t3, 1          # $t3 = 结果标记，默认1（是回文）

judge_loop:
bge     $t1, $t2, judge_end  # 若left >= right，判断结束
lb      $t4, str($t1)   # 取左指针位置字符
lb      $t5, str($t2)   # 取右指针位置字符
bne     $t4, $t5, not_palindrome  # 字符不等，不是回文

# 字符相等，移动指针继续比较
addi    $t1, $t1, 1     # left右移1位
addi    $t2, $t2, -1    # right左移1位
j       judge_loop

not_palindrome:
li      $t3, 0          # 结果标记设为0（非回文）

judge_end:

li      $v0, 1          # 系统调用：输出整数
move    $a0, $t3
syscall

li      $v0, 10
syscall