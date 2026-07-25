`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:41:04 12/08/2025 
// Design Name: 
// Module Name:    IF 
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
module IF(pc_new,jump_new,pcWrite,branch,data,clk
    );
	input clk,pcWrite,branch;
	input[31:0] jump_new;
	output[31:0] data,pc_new;
	
	wire[31:0] pc_next,address,pcc;
	wire sel;
	localparam[31:0] FOUR = 32'd4;
	
	
	
	PC pc(.pcWrite(pcWrite),.clk(clk),.pc_next(pc_next),
		.pc_out(address));
		
	InstructionMemory instruction(.address(address),.readData(data));
	
	ALU_add adder(.in0(address),.in1(FOUR),.out(pcc));
	
	Mux2to1 mux(.in1(jump_new),.in0(pcc),.ctrl(sel),.out(pc_next));
	
	

	assign sel = branch;
	assign pc_new = pcc;
	

endmodule
