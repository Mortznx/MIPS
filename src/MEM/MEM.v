`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:40:39 01/02/2026 
// Design Name: 
// Module Name:    MEM 
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
module MEM(clk,memWrite,memRead,address,wData,dst,rData,data,destination);
	
	input clk ,memWrite,memRead;
	input[31:0] address;
	input[31:0] wData;
	input[4:0] dst;
	
	output[31:0] rData;
	output[31:0] data;
	output[4:0] destination;
	
	MemoryVerilog mem(.clk(clk), .memRead(memRead), .memWrite(memWrite), 
					.address(address), .dataInput(wData), .dataOutput(rData));
					
	assign destination = dst;
	assign data = address;

endmodule
