mu = 175;     
sigma = 7;       
n = 150;       
p = zeros(1,2000);  

for i = 1:2000
    heights = normrnd(mu, sigma, 1, n);
    prop = sum(heights >= 170 & heights <= 180) / n;
    p(i) = prop;
end

prob_45 = sum(p >= 0.45) / 2000;
prob_50 = sum(p >= 0.5) / 2000;
prob_55 = sum(p >= 0.55) / 2000;

disp(['Probability of at least 45% of adults having height between 170cm and 180cm: ' num2str(prob_45)])
disp(['Probability of at least 50% of adults having height between 170cm and 180cm: ' num2str(prob_50)])
disp(['Probability of at least 55% of adults having height between 170cm and 180cm: ' num2str(prob_55)])
