`timescale 1ns / 1ps

module bh(input B, input H, input clk, output reg Q);

    initial begin
        Q = 1;
    end

	// You can implement your code here
    // ...
    always @ (posedge clk) begin 
    	if (~B&~H) Q<= ~Q;
    	else if (~B&H) Q<=1;
    	else if (B&~H) Q<=0;
    	else if (~B&H) Q<=Q;
    end

endmodule

module ic1337(// Inputs
              input A0,
              input A1,
              input A2,
              input clk,
              // Outputs
              output Q0,
              output Q1,
              output Z);

	// You can implement your code here
    // ...
	assign B0 = ((A0^~A1)|A2);
	assign H0 = (A0&~A2);
	assign B1 = (A0&~A2);
	assign H1 = (~(~A0|A1)&A2);
	bh bh_0(B0, H0, clk, Q0);
	bh bh_1(B1, H1, clk, Q1);
	assign Z = (Q0~^Q1);
endmodule
