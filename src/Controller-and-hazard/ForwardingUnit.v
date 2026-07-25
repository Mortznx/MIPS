`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:30:58 12/01/2025 
// Design Name: 
// Module Name:    ForwardingUnit 
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
module ForwardingUnit(ex25,ex20,mem,wb,writemem,writewb,
    forwardA,forwardB);
	input writemem,writewb;
	input[4:0] ex25,ex20,mem,wb;
	output[1:0] forwardA,forwardB;
	
	
	assign forwardA =
    (writemem && mem != 5'b0 && mem == ex25) ? 2'b10 :
    (writewb  && wb  != 5'b0 && wb  == ex25) ? 2'b01 :
                                               2'b00;

	assign forwardB =
		(writemem && mem != 5'b0 && mem == ex20) ? 2'b10 :
		(writewb  && wb  != 5'b0 && wb  == ex20) ? 2'b01 :
                                               2'b00;

endmodule
