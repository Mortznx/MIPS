`timescale 1ns / 1ps

module InstructionMemory(address,readData
    );
	
	input[31:0]  address;
	output[31:0] readData;
	
	localparam DEPTH = 16;
	localparam ADDR_BITS = 4;
	
	wire [ADDR_BITS-1 : 0] index;
	reg[31:0] mem [0:DEPTH-1];

	
	
	assign index = address[ADDR_BITS + 1:2];
	
	initial 
	begin
		$readmemh("/home/morteza/MIPS/program.mem",mem);
	end
	
	assign readData = mem[index];
	

endmodule
