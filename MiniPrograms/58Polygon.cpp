#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main(){
    float number, length, area;

    std::cout << " Input the number of sides of the polygon: ";
    std::cin>> number;
	std::cout << " Input the length of each side of the polygon: ";
	std::cin>> length;	

    area = (number*(length*length)) / (4*tan((M_PI/number)));

    std::cout<<" The area of the ploygon is: "<<area;
}