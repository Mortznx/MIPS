`timescale 1ns / 1ps

module WB(memToReg,mData,address,out
    );
	
	input memToReg;
	input[31:0] mData;
	input[31:0] address;
	
	output[31:0] out;
	Mux2to1 multiplexer(.in1(mData), .in0(address), .ctrl(memToReg), .out(out));


endmodule
