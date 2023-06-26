`timescale 1ns / 1ps
module SelectionOfAvatar(
	input [1:0] mode,
	input [5:0] userID,
	input [1:0] candidate, // 00:Air 01:Fire, 10:Water, 11: Earth
	input CLK,
	output reg [1:0] ballotBoxId,
	output reg [5:0] numberOfRegisteredVoters,
	output reg [5:0] numberOfVotesWinner, // number of votes of winner
	output reg [1:0] WinnerId,
	output reg AlreadyRegistered,
	output reg AlreadyVoted,
	output reg NotRegistered,
	output reg VotingHasNotStarted,
	output reg RegistrationHasEnded
	);

	reg [63:0] registerStatus;
	reg [63:0] voteStatus;
	reg [5:0] votes [3:0];
	reg [9:0] cycleCounter;
	
	initial begin
		// ...
		registerStatus = 64'b0;
		voteStatus = 64'b0;
		votes[0] = 6'b000000;
		votes[1] = 6'b000000;
		votes[2] = 6'b000000;
		votes[3] = 6'b000000;
		cycleCounter = 0;
		numberOfRegisteredVoters = 0;
		numberOfVotesWinner = 0;
		WinnerId = 0;
	end

	always @(posedge CLK)
	begin
		// ...
		AlreadyRegistered = 0; 
		AlreadyVoted = 0; 
		NotRegistered = 0; 
		VotingHasNotStarted = 0; 
		RegistrationHasEnded = 0;
		
		cycleCounter = cycleCounter + 1;
		ballotBoxId = userID[5:4];
		
		// registration
		if(cycleCounter <= 100) 
		begin 
			if(mode == 1)
				VotingHasNotStarted = 1;
			else 
			begin 
				VotingHasNotStarted = 0;
				if (registerStatus[userID] == 1)
					AlreadyRegistered = 1;
				else 
				begin 
					AlreadyRegistered = 0;
					registerStatus[userID] = 1;
					numberOfRegisteredVoters = numberOfRegisteredVoters + 1;
				end
			end
		end
		
		// voting
		else if (cycleCounter <= 200)
		begin
			if (mode == 0)
				RegistrationHasEnded = 1;
			else 
			begin 
				RegistrationHasEnded = 0;
				if(registerStatus[userID] == 0)
					NotRegistered = 1;
				else if(voteStatus[userID] == 1)
					AlreadyVoted = 1;
				else
				begin 
					NotRegistered = 0; 
					AlreadyVoted = 0;
					voteStatus[userID] = 1;
					votes[candidate] = votes[candidate] + 1;
				end
			end
		end
		
		else if (cycleCounter > 200) 
		begin
			cycleCounter = 201; 
			if (votes[0] >= votes[1] && votes[0] >= votes[2] && votes[0] >= votes[3]) 
			begin
				WinnerId = 2'b00; 
				numberOfVotesWinner = votes[0];
			end
			else if (votes[1] >= votes[0] && votes[1] >= votes[2] && votes[1] >= votes[3]) 
			begin
				WinnerId = 2'b01; 
				numberOfVotesWinner = votes[1];
			end
			else if (votes[2] >= votes[0] && votes[2] >= votes[1] && votes[2] >= votes[3]) 
			begin
				WinnerId = 2'b10; 
				numberOfVotesWinner = votes[2];
			end
			else if (votes[3] >= votes[0] && votes[3] >= votes[1] && votes[3] >= votes[2]) 
			begin
				WinnerId = 2'b11; 
				numberOfVotesWinner = votes[3];
			end
		end
	end
	

endmodule
