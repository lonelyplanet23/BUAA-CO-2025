# P1 课下
参考资料：https://www.runoob.com/w3cnote/verilog2-reset.html，教程， 

## verilog 规范
一个 always 块中不要存在多个并行或不相关的条件语句，使用多个 always 分别描述。如
```verilog
//不推荐
    always @(posedge clk) begin
        if (a == b)
            data_t1 <= data1 ;

        if (a == b && c == d)
            data_t2 <= data2 ;
        else 
            data_t2 <= 'b0 ;
    end
    
    //推荐分开写
    always @(posedge clk) begin
        if (a == b)
            data_t1 <= data1 ;
    end
    always @(posedge clk) begin
        if (a == b && c == d)
            data_t2 <= data2 ;
        else 
            data_t2 <= 'b0
    end
```
避免latch: **条件写全** Or **在过程模块中赋初值** or **defualt else**

变量声明时不要对变量进行赋初值操作。赋初值操作应该在复位状态下完成，也建议寄存器变量都使用复位端
如

## 同步复位
复位信号不要加入到敏感列表中
```verilog
    always @(posedge clk) begin
        if(reset) begin
            out = 0;
            state_cur = IDLE;
        end

        else begin
            state_cur = state_next;
        end
    end
```

## 异步复位
复位信号要加到敏感列表中
复位时只需要重置cur_state即可
```verilog
    always @(posedge clk, posedge reset) begin
        if(reset) begin
            out = 0;
            state_cur = IDLE;
        end

        else begin
            state_cur = state_next;
        end
    end

```

## test bench 漂亮写法

```verilog
always #1 clk = ~clk;
initial begin
    clk = 0;
    reset = 1;
    in = 0;
    data = "hello world!";
    while(!data[0:7]) data = data << 8;//一次传8位
    #2;
    reset = 0;
    while(data[0:7]) begin
        in[7:0] = data[0:7];
        data = data << 8;
        #2;
    end
    $finish;
end
```

# P1课上

## T3 json序列检测 

**一定注意是Moore机**,状态往多了设计，不要轻易合并，变成Mealy机
+ 除了上述情况外，**不会出现其他非法情况**。即输入的 json 序列只有两种：
    1. 合法 json 序列，所有键值对的字符串均不为空串。 
    2. 无效 json 序列，至少有一个字符串是空串。
+ **可以没有键值对**   
+ **最最关键的，关于计数多少键值对，用int变量记录，在状态转移时！！加1，不要在状态中加1，否则会连续计数，无论是MOORE还是Mealy**

状态转移图

```plantuml
' 竖直方向
title json序列检测

top to bottom direction

[*] -down-> IDLE
IDLE -down-> _BEGIN: 输入左括号
IDLE -> IDLE : default
_BEGIN -down-> LEFT_QUOTE: 输入引号
_BEGIN -down-> ZERO_END: 输入右括号
LEFT_QUOTE -> INVALID: 输入引号
LEFT_QUOTE -down-> CONTENT: 输入字符
CONTENT -down-> CONTENT: 输入字符
CONTENT -down-> RIGHT_QUOTE: 输入引号
RIGHT_QUOTE -down-> COLON : 输入冒号
COLON -down-> LEFT_QUOTE : 输入引号
RIGHT_QUOTE -down-> COMMA : 输入逗号
COMMA -> LEFT_QUOTE : 输入引号
RIGHT_QUOTE -down-> _END : 输入右括号
_END -> _BEGIN: 输入左括号
INVALID -> ZERO_END : 输入右括号
INVALID -> INVALID : default

ZERO_END -> _BEGIN: 输入左括号


IDLE: 000
_BEGIN: 001,cnt=0
LEFT_QUOTE: 010
CONTENT: 011
RIGHT_QUOTE: 100
COLON: 101
COMMA: 110,cnt++
_END: 111,cnt++,update
INVALID: 1000，cnt=0
ZERO_END: 1001, cnt=0, update




```

