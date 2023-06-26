`timescale 1ns / 1ps
module lab3_2(
			input[5:0] money,
			input CLK,
			input vm, //0:VM0, 1:VM1
			input [2:0] productID, //000:sandwich, 001:chocolate, 11x: dont care
			input sugar, //0: No sugar, 1: With Sugar
			output reg [5:0] moneyLeft,
			output reg [4:0] itemLeft,
			output reg productUnavailable,//1:show warning, 0:do not show warning
			output reg insufficientFund , //1:full, 0:not full
			output reg notExactFund , //1:full, 0:not full
			output reg invalidProduct, //1: empty, 0:not empty
			output reg sugarUnsuitable, //1: empty, 0:not empty
			output reg productReady	//1:door is open, 0:closed
	);

	// Internal State of the Module
	// (you can change this but you probably need this)
	reg [4:0] numOfSandwiches = 10;
	reg [4:0] numOfChocolate = 10;
	reg [4:0] numOfWaterVM1 = 5;
	reg [4:0] numOfWaterVM2 = 10;
	reg [4:0] numOfCoffee = 10;
	reg [4:0] numOfTea = 10;


	initial
	begin
		// You can initialize here
    	// ...
    	
    	
	end

	//Modify the lines below to implement your design
	always @(posedge CLK)
	begin
		productUnavailable <= 0;
		insufficientFund <= 0;	
		notExactFund <= 0;
		invalidProduct <= 0;
		sugarUnsuitable <= 0;
		productReady <= 0;
		
		// invalid product
		if (((vm == 0) && ((productID == 3'b011) || (productID == 3'b100))) ||
			((vm == 1) && ((productID == 3'b000) || (productID == 3'b001))) ||
			(productID > 3'b100))
		begin 
			invalidProduct <= 1;
			moneyLeft <= money; 
		end
		
		// product unavailable
		else if (
				((vm == 0) && ((productID == 3'b000) && (numOfSandwiches == 0) ||
							   (productID == 3'b001) && (numOfChocolate == 0) || 
							   (productID == 3'b010) && (numOfWaterVM1 == 0) )) || 
				((vm == 1)) && ((productID == 3'b010) && (numOfWaterVM2 == 0) ||
								(productID == 3'b011) && (numOfCoffee == 0) ||
								(productID == 3'b100) && (numOfTea == 0))
				)
		begin
			productUnavailable <= 1;
			moneyLeft <= money; 
		end	
		
		// sugar unsuitable
		else if ((vm == 1) && (productID == 3'b010) && (sugar == 1))
		begin 
			sugarUnsuitable <= 1;
			moneyLeft <= money; 
		end
		
		// not exact fund
		else if ((vm == 0) && ((productID == 3'b000) && (money != 20) || 
							   (productID == 3'b001) && (money != 10) || 
							   (productID == 3'b010) && (money != 5)))
		begin
			notExactFund <= 1; 
			moneyLeft <= money;
		end
		
		// insufficient fund
		else if ((vm == 1) && ((productID == 3'b010) && (money < 5) || 
							   (productID == 3'b011) && (money < 12) || 
							   (productID == 3'b100) && (money < 8)))
		begin
			insufficientFund <= 1;
			moneyLeft <= money;
		end
		
		// successfull		
		else 
		begin
			// VM 0
			if ((vm == 0) && (productID == 3'b000)) // sandwich
			begin
				itemLeft <= numOfSandwiches-1;
				numOfSandwiches <= numOfSandwiches-1;
				moneyLeft <= 0;
				productReady <= 1;
			end
			else if ((vm == 0) && (productID == 3'b001)) // choco
			begin
				itemLeft <= numOfChocolate-1;
				numOfChocolate <= numOfChocolate-1;
				moneyLeft <= 0;
				productReady <= 1;
			end
			else if ((vm == 0) && (productID == 3'b010)) // water vm 1
			begin
				itemLeft <= numOfWaterVM1-1;
				numOfWaterVM1 <= numOfWaterVM1-1;
				moneyLeft <= 0;
				productReady <= 1;
			end
			
			// VM 1
			else if ((vm == 1) && (productID == 3'b010)) // water vm 2
			begin
				itemLeft <= numOfWaterVM2-1;
				numOfWaterVM2 <= numOfWaterVM2-1;
				moneyLeft <= money - 5;
				productReady <= 1;
			end
			else if ((vm == 1) && (productID == 3'b011)) // coffee
			begin
				itemLeft <= numOfCoffee-1;
				numOfCoffee <= numOfCoffee-1;
				moneyLeft <= money - 12;
				productReady <= 1;
				
			end
			else if ((vm == 1) && (productID == 3'b100)) // tea
			begin
				itemLeft <= numOfTea-1;
				numOfTea <= numOfTea-1;
				moneyLeft <= money - 8;
				productReady <= 1;
				
			end
			
		end
						 
								 
	end


endmodule



