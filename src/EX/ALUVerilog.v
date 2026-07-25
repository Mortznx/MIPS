`timescale 1ns / 1ps

module ALUVerilog(numA,numB,result,ctrl);
	
	input[31:0]  numA , numB;
	input[1:0]   ctrl;
	output[31:0] result;
	
	assign result = 
		(ctrl==2'b00) ? (numA + numB) :
		(ctrl==2'b01) ? (numA - numB) :
		(ctrl==2'b10) ? (numA & numB) :
		(ctrl==2'b11) ? (numA | numB) : 
		32'b0;
	
endmodule
