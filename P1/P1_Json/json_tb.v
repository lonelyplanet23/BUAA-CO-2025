`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:17:07 10/24/2025
// Design Name:   json
// Module Name:   C:/Users/27628/Documents/CO-2025/P1/P1_Json/json_tb.v
// Project Name:  P1_Json
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: json
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module json_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] char;

	// Outputs
	wire [7:0] cur_num;
	wire [7:0] max_num;
	reg [0:1023] data; //一定要从小端开始
	integer i = 0;
	// Instantiate the Unit Under Test (UUT)
	json uut (
		.clk(clk), 
		.reset(reset), 
		.char(char), 
		.cur_num(cur_num), 
		.max_num(max_num)
	);

	always begin
		clk = 0;
		#1 clk = 1;
		#1;
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		char = 0;

		#100;
        reset = 1;
		

		data = "{\"key\":\"value\"} {\"k\":\"v\",\"k\":\"v\"} {\"a\":\"b\",\"c\":\"d\",\"e\":\"f\"} {\"\":\"value\"}{}";
		//赋值默认被挤到了最右端，需要左移到最高位
		while(!data[0:7]) data = data << 8;

		#10;
		reset = 0;
		for(; data[0:7]; data = data << 8) begin
			char = data[0:7];
			#2;
		end

		// Add stimulus here

	end
      
endmodule

