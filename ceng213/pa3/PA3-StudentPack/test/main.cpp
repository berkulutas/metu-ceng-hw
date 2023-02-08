#include <iostream>
#include<list>
#include <vector>

struct Color
{
    unsigned char r, g, b;
};

int main()
{
    Color c; 
    c.r = 255;
    c.g = 255;
    c.b = 255;

    double multiplier = 0.25;

    c.r = c.r * multiplier; 
    c.g *= multiplier; 
    c.b *= multiplier;   

    std::cout << c.r << " " << c.g << " " << c.b  << "\n "; 
}