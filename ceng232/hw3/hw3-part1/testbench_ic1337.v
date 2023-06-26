`timescale 1ns / 1ps
`include "./lab3_1.v" 

module testbench;
	// Inputs
	reg I0;
	reg I1;
	reg I2;
	reg clk;
	// Outputs
	wire Q0;
	wire Q1;
	wire Z;

	// Instantiate the Unit Under Test (UUT)
	ic1337 uut (.A0(I0),
                .A1(I1),
                .A2(I2),
                .clk(clk),
                .Q0(Q0),
                .Q1(Q1),
                .Z(Z));

    // Clock Related
    // At 5, 15, 25, .. clk will change 0->1
	// At 10, 20, 30, .. clk will change 1->0
    initial clk = 0;
    always #5 clk = ~clk;

	initial begin
		// Set monitor for inputs and outputs.
		$monitor("Time=%.2f | I0=%b I1=%b I2=%b | Q0=%b Q1=%b Z=%b", $time, I0, I1, I2, Q0, Q1, Z);

        //==========================//
        //       INITIAL VAL        //
        //==========================//
		#1; 
		if (Q0 != 1'b1) $display("Value of Q0 is wrong");
		else if (Q1 != 1'b1) $display("Value of Q1 is wrong");
		else if (Z != 1'b1) $display("Value of Z is wrong"); 
		else $display("Successful");
 
 
		#1; //(2ns) 
		I0 = 1'b0; I1 = 1'b0; I2 = 1'b0;
		#4; //(7ns) Wait for clock edge
		if (Q0 != 1'b0) $display("Value of Q0 is wrong");
		else if (Q1 != 1'b0) $display("Value of Q1 is wrong");
		else if (Z != 1'b1) $display("Value of Z is wrong"); 
		else $display("Successful");



        #1; //(8ns) 
		I0 = 1'b0; I1 = 1'b0; I2 = 1'b1;
		#9; //(16ns) Wait for clock edge
		if (Q0 != 1'b0) $display("Value of Q0 is wrong");
		else if (Q1 != 1'b1) $display("Value of Q1 is wrong");
		else if (Z != 1'b0) $display("Value of Z is wrong"); 
		else $display("Successful");


		#1; //(27ns) 
		I0 = 1'b0; I1 = 1'b1; I2 = 1'b0;
		#9; //(36ns) Wait for clock edge
		if (Q0 != 1'b1) $display("Value of Q0 is wrong");
		else if (Q1 != 1'b0) $display("Value of Q1 is wrong");
		else if (Z != 1'b0) $display("Value of Z is wrong"); 
		else $display("Successful");


		#1; //(37ns) 
		I0 = 1'b0; I1 = 1'b1; I2 = 1'b1;
		#9; //(46ns) Wait for clock edge
		if (Q0 != 1'b0) $display("Value of Q0 is wrong");
		else if (Q1 != 1'b1) $display("Value of Q1 is wrong");
		else if (Z != 1'b0) $display("Value of Z is wrong"); 
		else $display("Successful");


		#1; //(47ns) 
		I0 = 1'b1; I1 = 1'b0; I2 = 1'b0;
		#9; //(56ns) Wait for clock edge
		if (Q0 != 1'b1) $display("Value of Q0 is wrong");
		else if (Q1 != 1'b0) $display("Value of Q1 is wrong");
		else if (Z != 1'b0) $display("Value of Z is wrong"); 
		else $display("Successful");


		#1; //(57ns)
		I0 = 1'b1; I1 = 1'b0; I2 = 1'b1;
		#9; //(66ns) Wait for clock edge
		if (Q0 != 1'b0) $display("Value of Q0 is wrong");
		else if (Q1 != 1'b1) $display("Value of Q1 is wrong");
		else if (Z != 1'b0) $display("Value of Z is wrong"); 
		else $display("Successful");
		
		#1; //(67ns) 
		I0 = 1'b1; I1 = 1'b1; I2 = 1'b0;
		#9; //(66ns) Wait for clock edge
		if (Q0 != 1'b0) $display("Value of Q0 is wrong");
		else if (Q1 != 1'b0) $display("Value of Q1 is wrong");
		else if (Z != 1'b1) $display("Value of Z is wrong"); 
		else $display("Successful");

		#1; //(77ns) 
		I0 = 1'b1; I1 = 1'b1; I2 = 1'b1;
		#9; //(86ns) Wait for clock edge
		if (Q0 != 1'b0) $display("Value of Q0 is wrong");
		else if (Q1 != 1'b1) $display("Value of Q1 is wrong");
		else if (Z != 1'b0) $display("Value of Z is wrong"); 
		else $display("Successful");
		
		#5;
		$display("End of Sim!");
		$finish;
	end

endmodule

