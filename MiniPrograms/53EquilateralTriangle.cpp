#include <iostream>
#include <cmath>

int main(){
    float a, area;

    std::cout<<"value of the side of the equilateral triangle: ";
    std::cin>>a;
    area = sqrt(3)/4*(a*a);
    std::cout<<"The area of equilateral triangle is: "<<area<<std::endl;
}