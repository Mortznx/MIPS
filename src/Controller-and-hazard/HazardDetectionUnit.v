`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:17:37 12/02/2025 
// Design Name: 
// Module Name:    HazardDetectionUnit 
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
module HazardDetectionUnit(rs,rt,rd,memRead,pcWrite,
		ifWrite,exFlush);
	
	input[4:0] rs,rt,rd;
	input memRead;
	output reg pcWrite , ifWrite , exFlush;
	
	always@(*)
	begin
		if(memRead==1 && (rs==rd || rt==rd)) begin
			pcWrite = 1'b0;
			ifWrite = 1'b0;
			exFlush = 1'b1;
		end 
		else begin
			pcWrite = 1'b1;
			ifWrite = 1'b1;
			exFlush = 1'b0;
		end
	end 
	
	
endmodule
