#include <iostream>

int main(){

    float cm, m, km;

    std::cout<<"Type centimeters: ";
    std::cin>>cm;
    m = (cm/100);
    km = (cm/100000);
    std::cout<<"meters: "<<m<<"\nkilometers: "<<km<<std::endl;

    return 0;
}