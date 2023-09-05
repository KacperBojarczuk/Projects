#include <iostream>

int main()
{
    float km, m;

    std::cout << "kilometers: ";
    std::cin >> km;
    m = km * 0.6213712;

    std::cout<<"miles: "<<m<<std::endl;
}