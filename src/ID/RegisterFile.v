`timescale 1ns / 1ps

module RegisterFile(clk,regWrite,readReg1,
		readReg2,writeReg,writeData,readData1,readData2);
	
	input clk , regWrite;
	input[4:0] readReg1,readReg2,writeReg;
	input[31:0] writeData;

	output reg[31:0] readData1,readData2 = 32'b0;

	
	reg[31:0] regs [0:31];
	integer i;


	
	always @(negedge clk) begin
			readData1 <= (readReg1 == 0) ? 32'b0 : regs[readReg1];
			readData2 <= (readReg2 == 0) ? 32'b0 : regs[readReg2];
	end
	
	always @(posedge clk) begin
		if(regWrite && writeReg!=0) begin
			regs[writeReg] <= writeData;
		end
	end
	
	initial begin
		for(i=0;i<32;i=i+1)
			regs[i] <= 32'b0;
	end
	
endmodule
