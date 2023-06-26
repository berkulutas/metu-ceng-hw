`timescale 1ns / 1ps

module testbench;
	// Inputs
	reg[5:0] Money;
	reg clk;
	reg VM;
	reg[2:0] ProductID;
	reg Sugar;
	// Outputs
	wire[5:0] MoneyLeft;
	wire[4:0] ItemLeft;
	wire ProductUnavailable;
	wire InsufficientFund;
	wire InvalidProduct;
	wire SugarUnsuitable;
	wire ProductReady;
	
	wire[4:0] NumOfSandwiches;
	wire[4:0] NumOfChocolates;
	wire[4:0] NumOfTea;
	wire[4:0] NumOfWatersinVM0;
	wire[4:0] NumOfWatersinVM1;
	wire[4:0] NumOfCoffee;
	


	// Instantiate UUT
	lab3_2 uut (.money(Money),
				.CLK(clk),
				.vm(VM),
				.productID(ProductID),
				.sugar(Sugar),
				.moneyLeft(MoneyLeft),
				.itemLeft(ItemLeft),
				.productUnavailable(ProductUnavailable),
                .insufficientFund(InsufficientFund),
                .notExactFund(NotExactFund),
                .invalidProduct(InvalidProduct),
                .sugarUnsuitable(SugarUnsuitable),
                .productReady(ProductReady));

    // Clock Related
    // At 5, 15, 25, .. clk will change 0->1
	// At 10, 20, 30, .. clk will change 1->0
    initial clk = 0;
    always #5 clk = ~clk;

	initial begin
			
        // You can implement your test here...
		  $display("Starting Testbench...");
		  
		  // Case 1 (Line No 2)
		  #1; //1
		  Money = 6'b000011;
		  VM = 0;
		  ProductID = 3'b011;
		  Sugar = 0;
		  #10; //11
		  if (MoneyLeft == 6'b000011
				&& InvalidProduct == 1
				&& ProductReady == 0)
			begin
				$display("Case 1 - PASSED <time:%3d>", $time);;
			end
			else 
			begin
				$display("Case 1 - Expected:\t 000011\t x\t x\t x\t x\t 1\t x\t 0");
				$display("Case 1 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 1 - FAILED <time:%3d>", $time);;
			end

					  // Case 2 (Line No 3)
		  #1; //1
		  Money = 6'b000111;
		  VM = 0;
		  ProductID = 3'b100;
		  Sugar = 0;
		  #10; //11
		  if (MoneyLeft == 6'b000111
				&& InvalidProduct == 1
				&& ProductReady == 0)
			begin
				$display("Case 2 - PASSED <time:%3d>", $time);;
			end
			else 
			begin
				$display("Case 2 - Expected:\t 000111\t x\t x\t x\t x\t 1\t x\t 0");
				$display("Case 2 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 2 - FAILED <time:%3d>", $time);;
			end
			// Case 3 (Line No 4)
		    #1; //1
		  	Money = 6'b001111;
		  	VM = 0;
		  	ProductID = 3'b101;
		  	Sugar = 0;
		  	#10; //11
		  	if (MoneyLeft == 6'b001111
				&& InvalidProduct == 1
				&& ProductReady == 0)
			begin
				$display("Case 3 - PASSED <time:%3d>", $time);;
			end
			else 
			begin
				$display("Case 3 - Expected:\t 001111\t x\t x\t x\t x\t 1\t x\t 0");
				$display("Case 3 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 3 - FAILED <time:%3d>", $time);;
			end
				// Case 4 (Line No 5)
			#1; //1
		  	Money = 6'b011111;
		  	VM = 0;
		  	ProductID = 3'b110;
		  	Sugar = 0;
		  	#10; //11
		  	if (MoneyLeft == 6'b011111
				&& InvalidProduct == 1
				&& ProductReady == 0)
			begin
				$display("Case 4 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 4 - Expected:\t 011111\t x\t x\t x\t x\t 1\t x\t 0");
				$display("Case 4 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 4 - FAILED <time:%3d>", $time);;
			end
				// Case 5 (Line No 6)
			#1; //1
		  	Money = 6'b111111;
		  	VM = 0;
		  	ProductID = 3'b111;
		  	Sugar = 0;
		  	#10; //11
		  	if (MoneyLeft == 6'b111111
				&& InvalidProduct == 1
				&& ProductReady == 0)
			begin
				$display("Case 5 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 5 - Expected:\t 111111\t x\t x\t x\t x\t 1\t x\t 0");
				$display("Case 5 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 5 - FAILED <time:%3d>", $time);;
			end
					  // Case 6 (Line No 7)
		  #1; //1
		  Money = 6'b000011;
		  VM = 1;
		  ProductID = 3'b000;
		  Sugar = 0;
		  #10; //11
		  if (MoneyLeft == 6'b000011
				&& InvalidProduct == 1
				&& ProductReady == 0)
			begin
				$display("Case 6 - PASSED <time:%3d>", $time);;
			end
			else 
			begin
				$display("Case 6 - Expected:\t 000011\t x\t x\t x\t x\t 1\t x\t 0");
				$display("Case 6 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 6 - FAILED <time:%3d>", $time);;
			end


					  // Case 7 (Line No 8)
		  #1; //1
		  Money = 6'b000111;
		  VM = 1;
		  ProductID = 3'b001;
		  Sugar = 0;
		  #10; //11
		  if (MoneyLeft == 6'b000111
				&& InvalidProduct == 1
				&& ProductReady == 0)
			begin
				$display("Case 7 - PASSED <time:%3d>", $time);;
			end
			else 
			begin
				$display("Case 7 - Expected:\t 000111\t x\t x\t x\t x\t 1\t x\t 0");
				$display("Case 7 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 7 - FAILED <time:%3d>", $time);;
			end
						// Case 8 (Line No 9)
		    #1; //1
		  	Money = 6'b001111;
		  	VM = 1;
		  	ProductID = 3'b101;
		  	Sugar = 0;
		  	#10; //11
		  	if (MoneyLeft == 6'b001111
				&& InvalidProduct == 1
				&& ProductReady == 0)
			begin
				$display("Case 8 - PASSED <time:%3d>", $time);;
			end
			else 
			begin
				$display("Case 8 - Expected:\t 001111\t x\t x\t x\t x\t 1\t x\t 0");
				$display("Case 8 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 8 - FAILED <time:%3d>", $time);;
			end
			
							// Case 9 (Line No 10)
			#1; //1
		  	Money = 6'b011111;
		  	VM = 1;
		  	ProductID = 3'b110;
		  	Sugar = 0;
		  	#10; //11
		  	if (MoneyLeft == 6'b011111
				&& InvalidProduct == 1
				&& ProductReady == 0)
			begin
				$display("Case 9 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 9 - Expected:\t 011111\t x\t x\t x\t x\t 1\t x\t 0");
				$display("Case 9 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 9 - FAILED <time:%3d>", $time);;
			end

							// Case 10 (Line No 11)
			#1; //1
		  	Money = 6'b111111;
		  	VM = 1;
		  	ProductID = 3'b111;
		  	Sugar = 0;
		  	#10; //11
		  	if (MoneyLeft == 6'b111111
				&& InvalidProduct == 1
				&& ProductReady == 0)
			begin
				$display("Case 10 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 10 - Expected:\t 111111\t x\t x\t x\t x\t 1\t x\t 0");
				$display("Case 10 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 10 - FAILED <time:%3d>", $time);;
			end

			// Case 11 (Line No 12)
		  #1; //1
		  Money = 6'b000011;
		  VM = 0;
		  ProductID = 3'b000;
		  Sugar = 0;
		  #10; //11
		  if (MoneyLeft == 6'b000011
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& ProductReady == 0
				&& NotExactFund == 1)
			begin
				$display("Case 11 - PASSED <time:%3d>", $time);;
			end
			else 
			begin
				$display("Case 11 - Expected:\t 000011\t x\t 0\t x\t 1\t 0\t x\t 0");
				$display("Case 11 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 11 - FAILED <time:%3d>", $time);;
			end

						// Case 12 (Line No 13)
		  #1; //1
		  Money = 6'b000111;
		  VM = 0;
		  ProductID = 3'b001;
		  Sugar = 0;
		  #10; //11
		  if (MoneyLeft == 6'b000111
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& ProductReady == 0
				&& NotExactFund == 1)
			begin
				$display("Case 12 - PASSED <time:%3d>", $time);;
			end
			else 
			begin
				$display("Case 12 - Expected:\t 000111\t x\t 0\t x\t 1\t 0\t x\t 0");
				$display("Case 12 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 12 - FAILED <time:%3d>", $time);;
			end
			

						// Case 13 (Line No 14)
		  #1; //1
		  Money = 6'b001111;
		  VM = 0;
		  ProductID = 3'b010;
		  Sugar = 0;
		  #10; //11
		  if (MoneyLeft == 6'b001111
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& ProductReady == 0
				&& NotExactFund == 1)
			begin
				$display("Case 13 - PASSED <time:%3d>", $time);;
			end
			else 
			begin
				$display("Case 13 - Expected:\t 001111\t x\t 0\t x\t 1\t 0\t x\t 0");
				$display("Case 13 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 13 - FAILED <time:%3d>", $time);;
			end

									// Case 14 (Line No 15)
		  #1; //1
		  Money = 6'b000011;
		  VM = 1;
		  ProductID = 3'b010;
		  Sugar = 0;
		  #10; //11
		  if (MoneyLeft == 6'b000011
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& ProductReady == 0
				&& InsufficientFund == 1
				&& SugarUnsuitable == 0)
			begin
				$display("Case 14 - PASSED <time:%3d>", $time);;
			end
			else 
			begin
				$display("Case 14 - Expected:\t 000011\t x\t 0\t 1\t x\t 0\t 0\t 0");
				$display("Case 14 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 14 - FAILED <time:%3d>", $time);;
			end

			
									// Case 15 (Line No 16)
		  #1; //1
		  Money = 6'b000111;
		  VM = 1;
		  ProductID = 3'b011;
		  Sugar = 0;
		  #10; //11
		  if (MoneyLeft == 6'b000111
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& ProductReady == 0
				&& InsufficientFund == 1
				&& SugarUnsuitable == 0)
			begin
				$display("Case 15 - PASSED <time:%3d>", $time);;
			end
			else 
			begin
				$display("Case 15 - Expected:\t 000111\t x\t 0\t 1\t x\t 0\t 0\t 0");
				$display("Case 15 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 15 - FAILED <time:%3d>", $time);;
			end

									// Case 16 (Line No 17)
		  #1; //1
		  Money = 6'b000111;
		  VM = 1;
		  ProductID = 3'b100;
		  Sugar = 0;
		  #10; //11
		  if (MoneyLeft == 6'b000111
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& ProductReady == 0
				&& InsufficientFund == 1
				&& SugarUnsuitable == 0)
			begin
				$display("Case 16 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 16 - Expected:\t 000111\t x\t 0\t 1\t x\t 0\t 0\t 0");
				$display("Case 16 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 16 - FAILED <time:%3d>", $time);;
			end

									// Case 17 (Line No 18)
			#1; //1
		  	Money = 6'b000011;
		  	VM = 1;
		  	ProductID = 3'b010;
		  	Sugar = 1;
		  	#10; //11
		  	if (MoneyLeft == 6'b000011
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& SugarUnsuitable == 1
				&& ProductReady == 0)
			begin
				$display("Case 17 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 17 - Expected:\t 000011\t x\t 0\t x\t x\t 0\t 1\t 0");
				$display("Case 17 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 17 - FAILED <time:%3d>", $time);;
			end

									// Case 18 (Line No 19)
			#1; //1
			Money = 6'b010100;
		  	VM = 0;
		  	ProductID = 3'b000;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 9)
			begin
				$display("Case 18 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 18 - Expected:\t 000000\t 9\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 18 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 18 - FAILED <time:%3d>", $time);;
			end

									// Case 19 (Line No 20)
			#1; //1
			Money = 6'b010100;
		  	VM = 0;
		  	ProductID = 3'b000;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 8)
			begin
				$display("Case 19 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 19 - Expected:\t 000000\t 8\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 19 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 19 - FAILED <time:%3d>", $time);;
			end
			
									// Case 20 (Line No 21)	
			#1; //1
			Money = 6'b010100;
		  	VM = 0;
		  	ProductID = 3'b000;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 7)
			begin
				$display("Case 20 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 20 - Expected:\t 000000\t 7\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 20 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 20 - FAILED <time:%3d>", $time);;
			end

									// Case 21 (Line No 22)
			#1; //1
			Money = 6'b010100;
		  	VM = 0;
		  	ProductID = 3'b000;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 6)
			begin
				$display("Case 21 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 21 - Expected:\t 000000\t 6\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 21 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 21 - FAILED <time:%3d>", $time);;
			end

									// Case 22 (Line No 23)
			#1; //1
			Money = 6'b010100;
		  	VM = 0;
		  	ProductID = 3'b000;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 5)
			begin
				$display("Case 22 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 22 - Expected:\t 000000\t 5\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 22 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 22 - FAILED <time:%3d>", $time);;
			end

									// Case 23 (Line No 24)
			#1; //1
			Money = 6'b010100;
		  	VM = 0;
		  	ProductID = 3'b000;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 4)
			begin
				$display("Case 23 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 23 - Expected:\t 000000\t 4\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 23 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 23 - FAILED <time:%3d>", $time);;
			end

									// Case 24 (Line No 25)
			#1; //1
			Money = 6'b010100;
		  	VM = 0;
		  	ProductID = 3'b000;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 3)
			begin
				$display("Case 24 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 24 - Expected:\t 000000\t 3\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 24 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 24 - FAILED <time:%3d>", $time);;
			end

									// Case 25 (Line No 26)
			#1; //1
			Money = 6'b010100;
		  	VM = 0;
		  	ProductID = 3'b000;
		  	#8; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 2)
			begin
				$display("Case 25 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 25 - Expected:\t 000000\t 2\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 25 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 25 - FAILED <time:%3d>", $time);;
			end

									// Case 26 (Line No 27)
			#1; //1
			Money = 6'b010100;
		  	VM = 0;
		  	ProductID = 3'b000;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 1)
			begin
				$display("Case 26 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 26 - Expected:\t 000000\t 1\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 26 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 26 - FAILED <time:%3d>", $time);;
			end

									// Case 27 (Line No 28)
			#1; //1
			Money = 6'b010100;
		  	VM = 0;
		  	ProductID = 3'b000;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 0)
			begin
				$display("Case 27 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 27 - Expected:\t 000000\t 0\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 27 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 27 - FAILED <time:%3d>", $time);;
			end

									// Case 28 (Line No 29)
			#1; //1
			Money = 6'b001010;
		  	VM = 0;
		  	ProductID = 3'b001;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 9)
			begin
				$display("Case 28 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 28 - Expected:\t 000000\t 9\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 28 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 28 - FAILED <time:%3d>", $time);;
			end

									// Case 29 (Line No 30)
			#1; //1
			Money = 6'b001010;
		  	VM = 0;
		  	ProductID = 3'b001;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 8)
			begin
				$display("Case 29 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 29 - Expected:\t 000000\t 8\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 29 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 29 - FAILED <time:%3d>", $time);;
			end

									// Case 30 (Line No 31)
			#1; //1
			Money = 6'b001010;
		  	VM = 0;
		  	ProductID = 3'b001;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 7)
			begin
				$display("Case 30 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 30 - Expected:\t 000000\t 7\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 30 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 30 - FAILED <time:%3d>", $time);;
			end

									// Case 31 (Line No 32)
			#1; //1
			Money = 6'b001010;
		  	VM = 0;
		  	ProductID = 3'b001;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 6)
			begin
				$display("Case 31 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 31 - Expected:\t 000000\t 6\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 31 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 31 - FAILED <time:%3d>", $time);;
			end

									// Case 32 (Line No 33)
			#1; //1
			Money = 6'b001010;
		  	VM = 0;
		  	ProductID = 3'b001;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 5)
			begin
				$display("Case 32 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 32 - Expected:\t 000000\t 5\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 32 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 32 - FAILED <time:%3d>", $time);;
			end

									// Case 33 (Line No 34)
			#1; //1
			Money = 6'b001010;
		  	VM = 0;
		  	ProductID = 3'b001;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 4)
			begin
				$display("Case 33 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 33 - Expected:\t 000000\t 4\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 33 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 33 - FAILED <time:%3d>", $time);;
			end

									// Case 34 (Line No 35)
			#1; //1
			Money = 6'b001010;
		  	VM = 0;
		  	ProductID = 3'b001;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 3)
			begin
				$display("Case 34 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 34 - Expected:\t 000000\t 3\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 34 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 34 - FAILED <time:%3d>", $time);;
			end

									// Case 35 (Line No 36)
			#1; //1
			Money = 6'b001010;
		  	VM = 0;
		  	ProductID = 3'b001;
		  	#10; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 2)
			begin
				$display("Case 35 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 35 - Expected:\t 000000\t 2\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 35 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 35 - FAILED <time:%3d>", $time);;
			end

									// Case 36 (Line No 37)
			#1; //1
			Money = 6'b001010;
		  	VM = 0;
		  	ProductID = 3'b001;
		  	#8; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 1)
			begin
				$display("Case 36 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 36 - Expected:\t 000000\t 1\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 36 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 36 - FAILED <time:%3d>", $time);;
			end

									// Case 37 (Line No 38)
			#1; //1
			Money = 6'b001010;
		  	VM = 0;
		  	ProductID = 3'b001;
		  	#9; //11
		  	if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 0)
			begin
				$display("Case 37 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 37 - Expected:\t 000000\t 0\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 37 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 37 - FAILED <time:%3d>", $time);;
			end

									// Case 38 (Line No 39)
			#1; //1
			Money = 6'b000101;
			VM = 0;
			ProductID = 3'b010;
			Sugar = 0;
			#10; //11
			if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 4)
			begin
				$display("Case 38 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 38 - Expected:\t 000000\t 4\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 38 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 38 - FAILED <time:%3d>", $time);;
			end

									// Case 39 (Line No 40)
			#1; //1
			Money = 6'b000101;
			VM = 0;
			ProductID = 3'b010;
			#10; //11
			if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 3)
			begin
				$display("Case 39 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 39 - Expected:\t 000000\t 3\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 39 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 39 - FAILED <time:%3d>", $time);;
			end

									// Case 40 (Line No 41)
			#1; //1
			Money = 6'b000101;
			VM = 0;
			ProductID = 3'b010;
			#8; //11
			if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 2)
			begin
				$display("Case 40 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 40 - Expected:\t 000000\t 2\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 40 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 40 - FAILED <time:%3d>", $time);;
			end

									// Case 41 (Line No 42)
			#1; //1
			Money = 6'b000101;
			VM = 0;
			ProductID = 3'b010;
			#10; //11
			if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 1)
			begin
				$display("Case 41 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 41 - Expected:\t 000000\t 1\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 41 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 41 - FAILED <time:%3d>", $time);;
			end

									// Case 42 (Line No 43)
			#1; //1
			Money = 6'b000101;
			VM = 0;
			ProductID = 3'b010;
			#7; //11
			if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& NotExactFund == 0
				&& ProductReady == 1
				&& ItemLeft == 0)
			begin
				$display("Case 42 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 42 - Expected:\t 000000\t 0\t 0\t x\t 0\t 0\t x\t 1");
				$display("Case 42 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 42 - FAILED <time:%3d>", $time);;
			end

									// Case 43 (Line No 44)
			#1; //1
			Money = 6'b000101;
			VM = 0;
			ProductID = 3'b000;
			#9; //11
			if (MoneyLeft == 6'b000101
				&& InvalidProduct == 0
				&& ProductUnavailable == 1
				&& ProductReady == 0)
			begin
				$display("Case 43 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 43 - Expected:\t 000101\t x\t 1\t x\t x\t 0\t x\t 0");
				$display("Case 43 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 43 - FAILED <time:%3d>", $time);;
			end

									// Case 44 (Line No 45)
			#1; //1
			Money = 6'b000101;
			VM = 0;
			ProductID = 3'b001;
			#9; //11
			if (MoneyLeft == 6'b000101
				&& InvalidProduct == 0
				&& ProductUnavailable == 1
				&& ProductReady == 0)
			begin
				$display("Case 44 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 44 - Expected:\t 000101\t x\t 1\t x\t x\t 0\t x\t 0");
				$display("Case 44 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 44 - FAILED <time:%3d>", $time);;
			end

									// Case 45 (Line No 46)
			#1; //1
			Money = 6'b000101;
			VM = 0;
			ProductID = 3'b010;
			#9; //11
			if (MoneyLeft == 6'b000101
				&& InvalidProduct == 0
				&& ProductUnavailable == 1
				&& ProductReady == 0)
			begin
				$display("Case 45 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 45 - Expected:\t 000101\t x\t 1\t x\t x\t 0\t x\t 0");
				$display("Case 45 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 45 - FAILED <time:%3d>", $time);;
			end

									// Case 46 (Line No 47)
			#1; //1
			Money = 6'b000111;
			VM = 1;
			ProductID = 3'b010;
			Sugar = 0;
			#9; //11
			if (MoneyLeft == 6'b000010
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 9)
			begin
				$display("Case 46 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 46 - Expected:\t 000010\t 9\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 46 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 46 - FAILED <time:%3d>", $time);;
			end

			// Edge Case 1
			#1;
			Money = 6'b111111;
			VM=1;
			ProductID=3'b010;
			Sugar=1;
			#9;
			if (MoneyLeft == 6'b111111
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& SugarUnsuitable == 1
				&& ProductReady==0)
			begin
				$display("Edge Case 1- PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Edge Case 1- Expected:\t 111111\t x\t 0\t x\t x\t 0\t 1\t 0");
				$display("Edge Case 1- Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
									// Case 47 (Line No 48)
			end
			#1; //1
			Money = 6'b111111;
			VM = 1;
			Sugar = 0;
			ProductID = 3'b010;
			#9; //11
			if (MoneyLeft == 6'b111010
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 8)
			begin
				$display("Case 47 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 47 - Expected:\t 111010\t 8\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 47 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 47 - FAILED <time:%3d>", $time);;
			end

									// Case 48 (Line No 49)
			#1; //1
			Money = 6'b100101;
			VM = 1;
			ProductID = 3'b010;
			#9; //11
			if (MoneyLeft == 6'b100000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 7)
			begin
				$display("Case 48 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 48 - Expected:\t 100000\t 7\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 48 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 48 - FAILED <time:%3d>", $time);;
			end

									// Case 49 (Line No 50)
			#1; //1
			Money = 6'b011101;
			VM = 1;
			ProductID = 3'b010;
			#9; //11
			if (MoneyLeft == 6'b011000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 6)
			begin
				$display("Case 49 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 49 - Expected:\t 011000\t 6\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 49 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 49 - FAILED <time:%3d>", $time);;
			end

									// Case 50 (Line No 51)
			#1; //1
			Money = 6'b000110;
			VM = 1;
			ProductID = 3'b010;
			#9; //11
			if (MoneyLeft == 6'b000001
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 5)
			begin
				$display("Case 50 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 50 - Expected:\t 000001\t 5\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 50 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 50 - FAILED <time:%3d>", $time);;
			end

									// Case 51 (Line No 52)
			#1; //1
			Money = 6'b000101;
			VM = 1;
			ProductID = 3'b010;
			#9; //11
			if (MoneyLeft == 6'b000000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 4)
			begin
				$display("Case 51 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 51 - Expected:\t 000000\t 4\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 51 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 51 - FAILED <time:%3d>", $time);;
			end

									// Case 52 (Line No 53)
			#1; //1
			Money = 6'b001100;
			VM = 1;
			ProductID = 3'b010;
			#9; //11
			if (MoneyLeft == 6'b000111
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 3)
			begin
				$display("Case 52 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 52 - Expected:\t 000111\t 3\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 52 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 52 - FAILED <time:%3d>", $time);;
			end

									// Case 53 (Line No 54)

			#1; //1
			Money = 6'b001101;
			VM = 1;
			ProductID = 3'b010;
			#9; //11
			if (MoneyLeft == 6'b001000
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 2)
			begin
				$display("Case 53 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 53 - Expected:\t 001000\t 2\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 53 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 53 - FAILED <time:%3d>", $time);;
			end

									// Case 54 (Line No 55)
			#1; //1
			Money = 6'b010000;
			VM = 1;
			ProductID = 3'b010;
			#9; //11
			if (MoneyLeft == 6'b001011
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 1)
			begin
				$display("Case 54 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 54 - Expected:\t 001011\t 1\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 54 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 54 - FAILED <time:%3d>", $time);;
			end

									// Case 55 (Line No 56)
			#1; //1
			Money = 6'b010001;
			VM = 1;
			ProductID = 3'b010;
			#9; //11
			if (MoneyLeft == 6'b001100
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 0)
			begin
				$display("Case 55 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 55 - Expected:\t 001100\t 0\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 55 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 55 - FAILED <time:%3d>", $time);;
			end

									// Case 56 (Line No 57)


			#1; //1
			Money = 6'b111111;
			VM = 1;
			ProductID = 3'b011;
			#9; //11
			if (MoneyLeft == (6'b111111 - 6'b001100)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 9)
			begin
				$display("Case 56 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 56 - Expected:\t 110011\t 9\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 56 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 56 - FAILED <time:%3d>", $time);;
			end

									// Case 57 (Line No 58)
			#1; //1
			Money = 6'b101010;
			VM = 1;
			ProductID = 3'b011;
			#9; //11
			if (MoneyLeft == (6'b101010 - 6'b001100)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 8)
			begin
				$display("Case 57 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 57 - Expected:\t 011110\t 8\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 57 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 57 - FAILED <time:%3d>", $time);;
			end

									// Case 58 (Line No 59)
			#1; //1
			Money = 6'b111111;
			VM = 1;
			ProductID = 3'b011;
			#9; //11
			if (MoneyLeft == (6'b111111 - 6'b001100)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 7)
			begin
				$display("Case 58 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 58 - Expected:\t 110011\t 7\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 58 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 58 - FAILED <time:%3d>", $time);;
			end

									// Case 59 (Line No 60)
			#1; //1
			Money = 6'b110011;
			VM = 1;
			ProductID = 3'b011;
			#9; //11
			if (MoneyLeft == (6'b110011 - 6'b001100)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 6)
			begin
				$display("Case 59 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 59 - Expected:\t 100111\t 6\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 59 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 59 - FAILED <time:%3d>", $time);;
			end

									// Case 60 (Line No 61)
			#1; //1
			Money = 6'b100111;
			VM = 1;
			ProductID = 3'b011;
			#9; //11
			if (MoneyLeft == (6'b100111 - 6'b001100)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 5)
			begin
				$display("Case 60 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 60 - Expected:\t 011011\t 5\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 60 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 60 - FAILED <time:%3d>", $time);;
			end

									// Case 61 (Line No 62)
			#1; //1
			Money = 6'b011011;
			VM = 1;
			ProductID = 3'b011;
			#9; //11
			if (MoneyLeft == (6'b011011 - 6'b001100)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 4)
			begin
				$display("Case 61 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 61 - Expected:\t 001111\t 4\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 61 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 61 - FAILED <time:%3d>", $time);;
			end

									// Case 62 (Line No 63)
			#1; //1
			Money = 6'b001100;
			VM = 1;
			ProductID = 3'b011;
			#9; //11
			if (MoneyLeft == (6'b001100 - 6'b001100)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 3)
			begin
				$display("Case 62 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 62 - Expected:\t 000000\t 3\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 62 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 62 - FAILED <time:%3d>", $time);;
			end

									// Case 63 (Line No 64)
			#1; //1
			Money = 6'b001101;
			VM = 1;
			ProductID = 3'b011;
			#9; //11
			if (MoneyLeft == (6'b001101 - 6'b001100)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 2)
			begin
				$display("Case 63 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 63 - Expected:\t 000001\t 2\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 63 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 63 - FAILED <time:%3d>", $time);;
			end

									// Case 64 (Line No 65)
			#1; //1
			Money = 6'b001110;
			VM = 1;
			ProductID = 3'b011;
			#9; //11
			if (MoneyLeft == (6'b001110 - 6'b001100)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 1)
			begin
				$display("Case 64 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 64 - Expected:\t 000010\t 1\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 64 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 64 - FAILED <time:%3d>", $time);;
			end

									// Case 65 (Line No 66)
			#1; //1
			Money = 6'b001111;
			VM = 1;
			ProductID = 3'b011;
			#9; //11
			if (MoneyLeft == (6'b001111 - 6'b001100)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 0)
			begin
				$display("Case 65 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 65 - Expected:\t 000011\t 0\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 65 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 65 - FAILED <time:%3d>", $time);;
			end

									// Case 66 (Line No 67)
			#1; //1
			Money = 6'b001000;
			VM = 1;
			ProductID = 3'b100;
			#9; //11
			if (MoneyLeft == (6'b001000 - 6'b001000)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 9)
			begin
				$display("Case 66 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 66 - Expected:\t 000000\t 9\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 66 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 66 - FAILED <time:%3d>", $time);;
			end

									// Case 67 (Line No 68)
			#1; //1
			Money = 6'b001001;
			VM = 1;
			ProductID = 3'b100;
			#9; //11
			if (MoneyLeft == (6'b001001 - 6'b001000)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 8)
			begin
				$display("Case 67 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 67 - Expected:\t 000001\t 8\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 67 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 67 - FAILED <time:%3d>", $time);;
			end

									// Case 68 (Line No 69)
			#1; //1
			Money = 6'b001010;
			VM = 1;
			ProductID = 3'b100;
			#9; //11
			if (MoneyLeft == (6'b001010 - 6'b001000)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 7)
			begin
				$display("Case 68 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 68 - Expected:\t 000010\t 7\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 68 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 68 - FAILED <time:%3d>", $time);;
			end

									// Case 69 (Line No 70)
			#1; //1
			Money = 6'b001011;
			VM = 1;
			ProductID = 3'b100;
			#9; //11
			if (MoneyLeft == (6'b001011 - 6'b001000)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 6)
			begin
				$display("Case 69 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 69 - Expected:\t 000011\t 6\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 69 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 69 - FAILED <time:%3d>", $time);;
			end

									// Case 70 (Line No 71)
			#1; //1
			Money = 6'b001100;
			VM = 1;
			ProductID = 3'b100;
			#9; //11
			if (MoneyLeft == (6'b001100 - 6'b001000)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 5)
			begin
				$display("Case 70 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 70 - Expected:\t 000100\t 5\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 70 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 70 - FAILED <time:%3d>", $time);;
			end

									// Case 71 (Line No 72)
			#1; //1
			Money = 6'b001101;
			VM = 1;
			ProductID = 3'b100;
			#9; //11
			if (MoneyLeft == (6'b001101 - 6'b001000)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 4)
			begin
				$display("Case 71 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 71 - Expected:\t 000101\t 4\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 71 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 71 - FAILED <time:%3d>", $time);;
			end

									// Case 72 (Line No 73)
			#1; //1
			Money = 6'b001110;
			VM = 1;
			ProductID = 3'b100;
			#9; //11
			if (MoneyLeft == (6'b001110 - 6'b001000)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 3)
			begin
				$display("Case 72 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 72 - Expected:\t 000110\t 3\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 72 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 72 - FAILED <time:%3d>", $time);;
			end

									// Case 73 (Line No 74)
			#1; //1
			Money = 6'b001111;
			VM = 1;
			ProductID = 3'b100;
			#9; //11
			if (MoneyLeft == (6'b001111 - 6'b001000)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 2)
			begin
				$display("Case 73 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 73 - Expected:\t 000111\t 2\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 73 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 73 - FAILED <time:%3d>", $time);;
			end

									// Case 74 (Line No 75)
			#1; //1
			Money = 6'b010000;
			VM = 1;
			ProductID = 3'b100;
			#9; //11
			if (MoneyLeft == (6'b010000 - 6'b001000)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 1)
			begin
				$display("Case 74 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 74 - Expected:\t 001000\t 1\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 74 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 74 - FAILED <time:%3d>", $time);;
			end

									// Case 75 (Line No 76)
			#1; //1
			Money = 6'b010001;
			VM = 1;
			ProductID = 3'b100;
			#9; //11
			if (MoneyLeft == (6'b010001 - 6'b001000)
				&& InvalidProduct == 0
				&& ProductUnavailable == 0
				&& InsufficientFund == 0
				&& SugarUnsuitable == 0
				&& ProductReady == 1
				&& ItemLeft == 0)
			begin
				$display("Case 75 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 75 - Expected:\t 001001\t 0\t 0\t 0\t x\t 0\t 0\t 1");
				$display("Case 75 - Returned:\t %b\t %d\t %1d\t %1d\t %1d\t %1d\t %1d\t %1d",
														MoneyLeft,
														ItemLeft,
														ProductUnavailable,
														InsufficientFund,
														NotExactFund,
														InvalidProduct,
														SugarUnsuitable,
														ProductReady);
				$display("Case 75 - FAILED <time:%3d>", $time);;
			end

									// Case 76 (Line No 77)
			#1; //1
			Money = 6'b010010;
			VM = 1;
			ProductID = 3'b010;
			#9; //11
			if (MoneyLeft == 6'b010010
				&& InvalidProduct == 0
				&& ProductUnavailable == 1
				&& ProductReady == 0)
			begin
				$display("Case 76 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 76 - Expected:\t 010010\t 0\t 1\t x\t 0");
				$display("Case 76 - Returned:\t %b\t %1d\t %1d\t %1d",
														MoneyLeft,
														ProductUnavailable,
														InvalidProduct,
														ProductReady);
				$display("Case 76 - FAILED <time:%3d>", $time);;
			end

									// Case 77 (Line No 78)
			#1; //1
			Money = 6'b010011;
			VM = 1;
			ProductID = 3'b011;
			#9; //11
			if (MoneyLeft == 6'b010011
				&& InvalidProduct == 0
				&& ProductUnavailable == 1
				&& ProductReady == 0)
			begin
				$display("Case 77 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 77 - Expected:\t 010011\t 0\t 1\t x\t 0");
				$display("Case 77 - Returned:\t %b\t %1d\t %1d\t %1d",
														MoneyLeft,
														ProductUnavailable,
														InvalidProduct,
														ProductReady);
				$display("Case 77 - FAILED <time:%3d>", $time);;
			end

									// Case 78 (Line No 79)
			#1; //1
			Money = 6'b010100;
			VM = 1;
			ProductID = 3'b100;
			#9; //11
			if (MoneyLeft == 6'b010100
				&& InvalidProduct == 0
				&& ProductUnavailable == 1
				&& ProductReady == 0)
			begin
				$display("Case 78 - PASSED <time:%3d>", $time);;
			end
			else
			begin
				$display("Case 78 - Expected:\t 010100\t 0\t 1\t x\t 0");
				$display("Case 78 - Returned:\t %b\t %1d\t %1d\t %1d",
														MoneyLeft,
														ProductUnavailable,
														InvalidProduct,
														ProductReady);
				$display("Case 78 - FAILED <time:%3d>", $time);;
			end
										
		$finish;
	end 
endmodule

