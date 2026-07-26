`timescale 1ns / 1ps

module test(
    );
	reg clk;
	wire[63:0] out1;
	wire[128:0] out2;
	wire[72:0] out3;
	wire[70:0] out4;
	wire[31:0] out5;
	wire memToReg;
	
	MIPS mips(.clk(clk), .out1(out1), .out2(out2), .out3(out3), .out4(out4), .out5(out5), .y(memToReg));
	
	always #5 clk=~clk;
	
	initial begin
		clk=0;
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#10;
		$display("time=%0t,instruction=%h,data1=%h,data2=%h,immediate=%h,exData=%h,ALU-output=%h,memoryRead=%b,memoryWrite=%h,memory-output=%h,memoryAddress=%h,write-back=%h,memoryToReg=%b,regWrite=%b,destination=%h"
					,$time,out1[31:0],out2[120:89],out2[88:57],out2[56:25],out3[36:5],out3[68:37],out3[70],out3[69],out4[68:37],out4[36:5],out5,memToReg,out4[72],out4[4:0]);
		#1000;
		$finish;
	end;
	

endmodule
