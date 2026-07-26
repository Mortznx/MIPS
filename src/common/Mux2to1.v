`timescale 1ns / 1ps

module Mux2to1 #(parameter W=32) (in0,in1,ctrl,out
    );
	 
	 input[W-1:0] in0,in1;
	 input ctrl;
	 output[W-1:0] out;
	 
	 assign out = (ctrl) ? in1:in0;


endmodule
