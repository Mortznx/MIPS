`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:54:57 12/31/2025 
// Design Name: 
// Module Name:    ID 
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
module ID(clk,regWrite,instruct,pc_new,reg_address,data,zero,
		j_next,data1,data2,immediate,ins,src_regs,opcode
    );
	
	input clk,regWrite;
	input[31:0] instruct;
	input[31:0] pc_new;
	input[4:0] reg_address;
	input[31:0] data;
	
	output zero; 
	output[31:0] j_next; 
	output[31:0] data1 , data2; 
	output[31:0] immediate; 
	output[14:0] ins;            //bit 25 to bit 11 of instruction
	output[9:0] src_regs;		  //addresses of source registers 
	output[5:0] opcode;
	
	//sign extending
	wire[31:0] immed32;
	assign immed32 = {{16{instruct[15]}} , instruct[15:0]}; 
	
	//Register
	RegisterFile registerfile(.clk(clk), .regWrite(regWrite), 
				.readReg1(instruct[25:21]), .readReg2(instruct[20:16]),
				.writeReg(reg_address), .writeData(data), 
				.readData1(data1), .readData2(data2));
	
	//Adder			
	ALU_add adder(.in0(pc_new), .in1({immed32[29:0],2'b0}), .out(j_next));
	
	assign opcode = instruct[31:26];     //opcode for controller
	assign src_regs = instruct[25:16];   //source registers address for hazard detection
	assign ins = instruct[25:11]; 
	assign immediate = immed32;          //immediate for I_type
	assign zero = &(data1 ~^ data2);		 //check zero
	
	

endmodule
