mu = 175; 
sigma = 7;

data = normrnd(mu, sigma, [2000, 1]);

hist(data);
title('Distribution of Height');
xlabel('Height (cm)');
ylabel('Frequency');
