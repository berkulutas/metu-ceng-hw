N=1504; % size of Monte Carlo Simulation calculated with formula
total_weight=zeros(N,1); % keep weight of ships for each run

for k=1:N;
	curr_weight = 0; % the total weight for current run

	% bulk carriers
	lambda = 50;
	U = rand; i = 0;
	F = exp(-lambda);
	while (U>=F);
		i=i+1;
		F = F+exp(-lambda)*lambda^i/gamma(i+1);
	end;
	bulk_carrier = i;
	
	% container ships
	lambda = 40;
	U = rand; i = 0;
	F = exp(-lambda);
	while (U>=F);
		i=i+1;
		F = F+exp(-lambda)*lambda^i/gamma(i+1);
	end;
	container_ship = i;
	
	% oil tankers
	lambda = 25;
	U = rand; i = 0;
	F = exp(-lambda);
	while (U>=F);
		i=i+1;
		F = F+exp(-lambda)*lambda^i/gamma(i+1);
	end;
	oil_tanker = i;
	
	% total weight of bulk carriers
	for j=1:bulk_carrier; 
		X = sum(-1/0.1 * log(rand(60,1)));
		curr_weight = curr_weight + X;
	end;

	% total weight of container ships
	for j=1:container_ship;  
		X = sum(-1/0.05 * log(rand(100,1)));
		curr_weight = curr_weight + X;
	end;

	% total weight of oil tankers
	for j=1:oil_tanker; 
		X = sum(-1/0.02 * log(rand(120,1)));
		curr_weight = curr_weight + X;
	end;

	total_weight(k) = curr_weight;
end;


fprintf('Estimated probability = %f\n',mean(total_weight>300000));
fprintf('Expected weight = %f\n',mean(total_weight));
fprintf('Standard deviation = %f\n',std(total_weight));