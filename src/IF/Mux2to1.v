`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:07:21 12/08/2025 
// Design Name: 
// Module Name:    Mux2to1 
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
module Mux2to1 #(parameter W=32) (in0,in1,ctrl,out
    );
	 
	 input[W-1:0] in0,in1;
	 input ctrl;
	 output[W-1:0] out;
	 
	 assign out = (ctrl) ? in1:in0;


endmodule
