`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:10:53 12/08/2025 
// Design Name: 
// Module Name:    Mux3to1 
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
module Mux3to1 #(parameter W=32) (in0,in1,in2,ctrl,out
    );
	input[W-1:0] in0,in1,in2;
	input[1:0] ctrl;
	output[W-1:0] out;
	
	assign out = (ctrl==2'b00) ? in0:
			(ctrl==2'b01) ? in1:
			(ctrl==2'b10) ? in2:
			32'b0;

endmodule
