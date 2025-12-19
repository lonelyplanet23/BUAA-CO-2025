# Verilog 入门2  HDLbits 教程

> 参考文献与网站：https://hdlbits.01xz.net/ 非常适合熟悉verilog的编写

## 入门

+ Module 的定义
+ assign 与 直接`=`的区别

## 基础

1. Wire 类型： **默认类型** 如`output o1`默认指的就是wire类型
   + 有向性：在`continious assignment`中默认将右面的信息转递给左面
   + **语句内涵**： 使用`Assign`语句来用某个常数、变量、Wire**持久驱动**Wire 类型**（实时传递）**
   + `output` `input`只能在 `Module`中声明，模块内的临时变量需要用`Wire`
   + **多变量同时声明**，需要是**相同位宽**，如`wire [7:0] a1, a2, a3;`
   
2. 逻辑门： 
   - `~` 按位非， `!`逻辑非
   - `^ | ~ &` 可作为单目运算符，表示把一个向量按位运算  如`assign out = &in;`

## 向量

1. 未定义直接`assign`的隐式变量为 **net类型** 是 单位数据，尽量不要这么做 加上这句话后减少此类错误`default_nettype none `
2. 区分向量与Array 如：`reg[7:0] mem [255:0];`
3. **不允许翻转矢量位排序**
4. **串联运算符**
   + 组件长度必须标出来 不能单独一个数字
   + 可用于赋值的左侧和右侧。**甚至可以两侧同时串联，如**` assign {w, x, y, z} = {a, b, c, d, e, f, 2'b11};`表示![image-20251016112049302](./assets/image-20251016112049302.png)
   + **复制**`{num{vector}}` num必须为常数
   + **和其他信号、常量一起放在串联中**`  assign out ={24{in[7]}, in}; ` **要在套一层大括号**

## 模块 Module

1. 模块实例化：
   - 位置映射,注意端口定义顺序
   - 名字映射,不需要顺序 但需要加`.ports_name(the_wires_passed_in)`
2. `generate` 多个模块的重复例化, 内可使用 for if 等语句
   + `: 标签名`声明标签后， `标签名[i].模块名`即为每一个模块。
```verilog
   genvar i;
   generate
      for(i = 1; i <= 3; i = i+1)begin: adder_gen
         //instantiate the module
      end
```
3. **实例数组** `mod my_module[3:0](.clk(clk), .din(din[3:0]), .dout(dout[7:0]));` 
   + 注意接口位宽需要是例化模块的个数的整数倍。
4. 模块之间的传递的临时数据 用`wire`类型，如 全加器中的进位。

## 过程结构 procedure

**其中的语法与外部不同**，不允许使用**连续赋值**（assign）（不可综合),只能使用 `x = y;` 或者非阻塞`x <= y`;

只能给**变量**赋值（如：reg,integer）不能给**net**赋值（如：wire）

**不能定义变量！**



1. `Always`语块

   - 组合逻辑: `always @(*)` 与 Assign效果相同
     - `assign out1 = a & b | c ^ d; `
     - `always @(*) out2 = a & b | c ^ d;`
     - 这两个等价
     - 用阻塞赋值
   - 时序逻辑：`always @(posedge clk)` (negedge)
     - 内部需要用非阻塞赋值 `<=`

2. `if`语句 ：out 只能被同时赋一个值，才可综合

3. **常见问题** 避免latches:
   +  最好都要有`else`
   +  多输出时，在`always`中预先为输出赋初始值。
      +  例如计数器cnt 必须要在 always中 `cnt = 0`，否则执行一次后，会保持那个值不变

   > The usual reason is: "What happens in the cases other than those you specified?". Verilog's answer is: Keep the outputs unchanged

4. `case` `endcase`语句
   1. 多个判定时可以用逗号联立，如
   ```verilog
   case (ascii)
       "0", "1", "2", "3", "4", "5", "6", "7", "8", "9": begin
        is_digit = 1'b1;
        value = ascii - "0";
    end
    default: begin
        is_digit = 1'b0;
        value = 4'd0;
    end
   endcase
   ```

5. `casez` `endcase` 这时条件可以有`4'bzzz1`表示前三位无所谓，以简化判断条件

   1. casez 语句 若有几个条件同时满足，则**只运行第一个被满足的**
   
6. 三目判断符的常见用法,**可以嵌套**
```verilog
(sel ? b : a)   // A 2-to-1 multiplexer between a and b selected by sel.

always @(posedge clk)         // A T-flip-flop.
  q <= toggle ? ~q : q;

always @(*)                   // State transition logic for a one-input FSM
  case (state)
    A: next = w ? B : A;
    B: next = w ? A : B;
  endcase

assign out = ena ? q : 1'bz;  // A tri-state buffer

((sel[1:0] == 2'h0) ? a :     // A 3-to-1 mux
 (sel[1:0] == 2'h1) ? b :
                      c )
```
7. `initial` 语块：只执行一次
   +  一般不可综合，多用于初始化、信号检测，仿真，testbench编写
   + 如：
   + 
```verilog
`timescale 1ns/1ns
 
module test ;
    reg  ai;
 
    initial begin
        ai         = 0 ;
        #25 ;      ai        = 1 ;
        #35 ;      ai        = 0 ;        //absolute 60ns
        #40 ;      ai        = 1 ;        //absolute 100ns
        #10 ;      ai        = 0 ;        //absolute 110ns
    end
 
 
    //at proper time stop the simulation
    initial begin
        forever begin
            #100;
            //$display("---gyc---%d", $time);
            if ($time >= 1000) begin
                $finish ;
            end
        end
   end
 
endmodule
```

## extra vscode安装法
+ 安装插件
+ 下载ctags 配置到PATH或者将路径拷贝到设置中（配置环境变量也需要在设置中填写"ctags"）
+ 下载iverilog 同样的配置