`timescale 1ns / 1ps

module ROM (
input [2:0] addr,
output reg [7:0] dataOut);

	// write your ROM code here
	reg [7:0] ROM [7:0];
	
	initial begin
		ROM[0] = 8'b00000000;
		ROM[1] = 8'b01010101;
		ROM[2] = 8'b10101010;
		ROM[3] = 8'b00110011;
		ROM[4] = 8'b11001100;
		ROM[5] = 8'b00001111;
		ROM[6] = 8'b11110000;
		ROM[7] = 8'b11111111;
	end
	
	always@(*) begin
		dataOut = ROM[addr];
	end



endmodule

module Difference_RAM (
input mode,
input [2:0] addr,
input [7:0] dataIn,
input [7:0] mask,
input CLK,
output reg [7:0] dataOut);

	// write your XOR_RAM code here
	reg [7:0] RAM [7:0];
	
	initial begin
		RAM[0] = 8'b00000000;
		RAM[1] = 8'b00000000;
		RAM[2] = 8'b00000000;
		RAM[3] = 8'b00000000;
		RAM[4] = 8'b00000000;
		RAM[5] = 8'b00000000;
		RAM[6] = 8'b00000000;
		RAM[7] = 8'b00000000;
	end
	
	always@(posedge CLK) begin 
		if (mode == 0) begin // write mode
			if (dataIn > mask) begin 
				RAM[addr] = dataIn - mask; 
			end
			else begin
				RAM[addr] = mask - dataIn; 
			end
		end
	end
	
	always@(posedge mode) begin 
		if (mode == 1) begin // read mode
			dataOut = RAM[addr]; 
		end
	end
	


endmodule


module EncodedMemory (
input mode,
input [2:0] index,
input [7:0] number,
input CLK,
output [7:0] result);

	wire [7:0] mask;

	ROM R(index, mask);
	Difference_RAM DR(mode, index, number, mask, CLK, result);

endmodule


