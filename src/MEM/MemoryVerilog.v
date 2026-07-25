
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:22:17 12/04/2025 
// Design Name: 
// Module Name:    MemoryVerilog 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MemoryVerilog(
		clk,address,dataInput,dataOutput,memRead,memWrite
    );
	 
	 input memRead,memWrite,clk;
	 input[31:0] address;
	 input[31:0] dataInput;
	 output reg [31:0] dataOutput = 32'b0;
	 
	 reg[31:0] regs [0:15];
	 integer i;
	 
	 always@(*)
	 begin
		if(memRead)
			dataOutput = regs[address[3:0]];
		else
			dataOutput = 32'b0;
	 end
	 
	 always@(posedge clk) 
	 begin
		if(memWrite) 
			regs[address[3:0]] <= dataInput;
	 end	
	 
	 initial begin
		for(i=0;i<16;i=i+1) 
				regs[i] <= 32'b0;
	 end
	 

endmodule
