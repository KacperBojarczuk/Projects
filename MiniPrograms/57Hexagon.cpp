#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>


int main(){
    float s, area;
    std::cout << "Input the side of the hexagon: ";
    std::cin >>s;

    area = (6*(s*s))/(4*tan(M_PI/6));
    std::cout<<"area "<<area;
}