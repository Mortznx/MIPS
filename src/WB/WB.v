`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:04:50 01/02/2026 
// Design Name: 
// Module Name:    WB 
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
module WB(memToReg,mData,address,out
    );
	
	input memToReg;
	input[31:0] mData;
	input[31:0] address;
	
	output[31:0] out;
	Mux2to1 multiplexer(.in1(mData), .in0(address), .ctrl(memToReg), .out(out));


endmodule
