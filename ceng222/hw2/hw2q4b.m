mu = 175;

sigma_values = [6, 7, 8];

x = linspace(mu-4*max(sigma_values), mu+4*max(sigma_values), 1000);

for i = 1:numel(sigma_values)
    y = normpdf(x, mu, sigma_values(i));
    
    plot(x, y, 'LineWidth', 2);
    hold on;
end

title('Distribution of Height');
xlabel('Height (cm)');
ylabel('Probability Density');

legend('sigma = 6', 'sigma = 7', 'sigma = 8');
