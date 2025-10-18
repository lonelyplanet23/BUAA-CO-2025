# P1 课下
参考资料：https://www.runoob.com/w3cnote/verilog2-reset.html，教程

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
module sync_reset(
    input       rstn,  //同步复位信号
    input       clk,   //时钟
    input       din,   //输入数据
    output reg  dout   //输出数据
    );
    
    always @(posedge clk) begin   //复位信号不要加入到敏感列表中
        if(!rstn)  dout <= 1'b0 ; //rstn 信号与时钟 clk 同步 //所有输出变量最好都要复位
        else       dout <= din ;
    end
    
endmodule
```

## 异步复位
复位信号要加到敏感列表中

```verilog
module async_reset(
    input       rstn,  //异步复位信号
    input       clk,   //时钟
    input       din,   //输入数据
    output reg  dout   //输出数据
    );
    
    //复位信号要加到敏感列表中
    always @(posedge clk or negedge rstn) begin
        if(!rstn)  dout <= 1'b0 ; //rstn 信号与时钟 clk 异步
        else       dout <= din ;
    end
    
endmodule   
```