`timescale 1ns / 1ps

module ControllerVerilog(opcode,func,aluop,memRead,memWrite,
		regDst , aluSrc , regWrite , memToReg , branch ,
		branchN);
		
		input[5:0] opcode,func;
		output[1:0] aluop;
		output memRead,memWrite,
		regDst , aluSrc , regWrite , memToReg , branch ,
		branchN;
		
		assign memRead  = (opcode==6'b100011) ? 1'b1:1'b0;  
		assign memWrite = (opcode==6'b101011) ? 1'b1:1'b0;	 
		assign regDst   = (opcode==6'b000000) ? 1'b1:1'b0;	 
		assign memToReg = (opcode==6'b100011) ? 1'b1:1'b0;  
		assign branch   = (opcode==6'b000100) ? 1'b1:1'b0;  
		assign branchN  = (opcode==6'b000101) ? 1'b1:1'b0;  
		assign aluSrc   = (opcode==6'b100011) ||				 
								(opcode==6'b101011) ||				 
								(opcode==6'b001000) ? 1'b1:1'b0;  
		assign aluop    = (opcode==6'b000000 && func==100000) ? 2'b00 :		 
								(opcode==6'b000000 && func==100010) ? 2'b01 :
								(opcode==6'b000000 && func==100100) ? 2'b10 :
								(opcode==6'b000000 && func==100101) ? 2'b11 :
								(opcode==6'b000100) ? 2'b10 :
								(opcode==6'b000101) ? 2'b10 : 
								(opcode==6'b001000) ? 2'b00 :     
								2'b00;
		assign regWrite = (opcode==6'b101011) ||
								(opcode==6'b000100) ||
								(opcode==6'b000101) ? 1'b0:1'b1;
		

endmodule

