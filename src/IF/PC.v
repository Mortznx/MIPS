`timescale 1ns / 1ps

module PC(
		pcWrite,clk,pc_next,pc_out);
	
	input pcWrite , clk;
	input[31:0] pc_next;
	output reg[31:0] pc_out = 32'b0;
	
	always @(posedge clk) 
	begin
		if(pcWrite) 
			pc_out <= pc_next;
	end
	


endmodule
