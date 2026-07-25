`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:21:02 12/08/2025 
// Design Name: 
// Module Name:    ALU_add 
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
module ALU_add (in0,in1,out
   );
	input[31:0] in0,in1;
	output[31:0] out;
	
	assign out = (in0+in1);

endmodule
