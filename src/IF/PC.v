`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:50:20 12/08/2025 
// Design Name: 
// Module Name:    PC 
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
module PC(
		pcWrite,clk,pc_next,pc_out);
	
	input pcWrite , clk;
	input[31:0] pc_next;
	output reg[31:0] pc_out = 32'b0;
	
	always @(posedge clk) 
	begin
		if(pcWrite) 
			pc_out <= pc_next;
	end
	


endmodule
