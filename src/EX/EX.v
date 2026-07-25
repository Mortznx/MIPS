`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:44:13 01/01/2026 
// Design Name: 
// Module Name:    EX 
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
module EX(aluSrc,regDst,data1,data2,immediate,forMEM,
		forWB,dstIn,ctrl,forwardA,forwardB,address,data
		,dstOut
    );
	input aluSrc, regDst;
	input[31:0] data1 , data2;
	input[31:0] immediate;
	input[31:0] forMEM , forWB;
	input[9:0] dstIn;
	input[1:0] ctrl;
	input[1:0] forwardA,forwardB;
	 
	output[31:0] address;
	output[31:0] data;
	output[4:0] dstOut;
	
	wire[31:0] input1,input2,tmp;
	
	//first input multiplexer
	Mux3to1 #32 m31(.in0(data1), .in1(forWB), .in2(forMEM),
				.ctrl(forwardA), .out(input1));
	//second input multiplexer
	Mux3to1 #32 m32(.in0(data2), .in1(forWB), .in2(forMEM),
				.ctrl(forwardB), .out(tmp));
	
	//second input multiplexer
	Mux2to1 #32 m21(.in0(tmp), .in1(immediate), .ctrl(aluSrc), 
						.out(input2));
	//destination multiplexer
	Mux2to1 #5 m22(.in0(dstIn[9:5]),.in1(dstIn[4:0]),
				.ctrl(regDst), .out(dstOut));
	
	//ALU
	ALUVerilog alu(.numA(input1), .numB(input2), .ctrl(ctrl),
				.result(address));
				
	assign data = tmp;
	
	
endmodule
