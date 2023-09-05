#include <iostream>

int main(){

float a, b, c;

std::cout<<"Enter angle a: ";
std::cin>>a;
std::cout<<"Enter angle b: ";
std::cin>>b;

c = 180-(a+b);

std::cout<<"C = "<<c<<std::endl;

}