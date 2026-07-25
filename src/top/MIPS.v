`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: morteza nazari
// 
// Create Date:    22:48:35 02/03/2026 
// Design Name: Pipeline MIPS
// Module Name: MIPS 
// Project Name: MIPS
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MIPS(clk,out1,out2,out3,out4,out5,y
    );
	 
	//ports
	input clk;
	output wire[63:0] out1;
	output wire[128:0] out2;
	output wire[72:0] out3;
	output wire[70:0] out4;
	output wire[31:0] out5;
	output wire y;
	
	//wires
	wire pcWrite,branch,regWrite,zero;
	wire memRead,memWrite,regDst,aluSrc,memToReg,
		branchN,ifWrite,exFlush;
	wire[31:0] pc_new,jump_new,data,reg_address,data1,
				data2,immediate; //jump_new is similar j_next
	wire[31:0] exAddress,exData,readData,memAddress,writeBack;
	wire[14:0] ins;
	wire[9:0] src_regs;
	wire[5:0] opcode;
	wire[4:0] dstOut,destination;
	wire[1:0] forwardA,forwardB;
	wire[1:0] aluop;

	//regs
	reg[63:0] IFID = 64'b0; //63-32 for pc_new & 31-0 for data
	reg[128:0] IDEX = 129'b0;
	reg[72:0] EXMEM = 73'b0;
	reg[70:0] MEMWB = 71'b0;
	
	//IF unit
	IF IFetch(.pc_new(pc_new), .jump_new(jump_new), .data(data),
			.clk(clk), .pcWrite(pcWrite), .branch((branch&zero)|(branchN&!zero)));
	
	//ID unit
	ID IDecode(.clk(clk), .regWrite(MEMWB[70]), .instruct(IFID[31:0]),
				.pc_new(IFID[63:32]), .reg_address(MEMWB[4:0]), 
				.data(writeBack), .zero(zero), .j_next(jump_new), .data1(data1), 
				.data2(data2), .immediate(immediate), .ins(ins), 
				.src_regs(src_regs), .opcode(opcode));
	
	//control unit
	ControllerVerilog controller(.opcode(opcode), .aluop(aluop), 
			.memRead(memRead), .memWrite(memWrite), .regDst(regDst),
			.aluSrc(aluSrc), .regWrite(regWrite), .memToReg(memToReg),
			.branch(branch), .branchN(branchN), .func(IFID[5:0]));
	
	//hazard detection unit
	HazardDetectionUnit hazard(.rs(IFID[25:21]), .rt(IFID[20:16]), 
				.rd(IDEX[9:5]), .memRead(IDEX[126]), .pcWrite(pcWrite), 
				.ifWrite(ifWrite), .exFlush(exFlush));
	
	//EXE unit
	EX ex(.aluSrc(IDEX[124]), .regDst(IDEX[121]), .data1(IDEX[120:89]),
		.data2(IDEX[88:57]), .immediate(IDEX[56:25]), .forMEM(EXMEM[68:37]),
		.forWB(writeBack), .dstIn(IDEX[9:0]), .ctrl(IDEX[123:122]),
		.forwardA(forwardA), .forwardB(forwardB), .address(exAddress), 
		.data(exData), .dstOut(dstOut));
	
	//forwarding unit
	ForwardingUnit forwarding(.ex25(IDEX[14:10]), .ex20(IDEX[9:5]), 
		.mem(EXMEM[4:0]), .wb(MEMWB[4:0]), .writemem(EXMEM[72]), 
		.writewb(MEMWB[70]), .forwardA(forwardA), .forwardB(forwardB));
	
	//MEM unit
	MEM memory(.clk(clk), .memWrite(EXMEM[69]), 
			.memRead(EXMEM[70]), .address(EXMEM[68:37]),
			.wData(EXMEM[36:5]), .dst(EXMEM[4:0]), .rData(readData),
			.data(memAddress), .destination(destination));

	//WB unit
	WB wb(.memToReg(MEMWB[69]), .mData(MEMWB[68:37]), 
			.address(MEMWB[36:5]), .out(writeBack));
	
	//IF/ID unit
	always @(posedge clk) 
	begin
		if((branch&&zero) || (branchN&&~zero))	
			IFID <= 64'b0;
		else if(ifWrite)
			IFID <= {pc_new , data};
	end
	
	//ID/EXE unit
	always @(posedge clk) 
	begin
		if(exFlush)
			IDEX <= 129'b0;
		else begin
			IDEX <= {regWrite , memToReg, memRead,memWrite,aluSrc,aluop,
					regDst, data1, data2, immediate, src_regs, 
					ins};
		end
	end
	
	//EX/MEM unit
	always @(posedge clk)
	begin
		EXMEM <= {IDEX[128:125] , exAddress , exData , dstOut};
	end

	always @(posedge clk)
	begin
		MEMWB <= {EXMEM[72:71], readData, memAddress, destination};
	end

	assign out1 = IFID;
	assign out2 = IDEX;
	assign out3 = EXMEM;
	assign out4 = MEMWB;
	assign out5 = writeBack;
	assign y    = MEMWB[69];

endmodule
