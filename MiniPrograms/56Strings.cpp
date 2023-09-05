#include <iostream>
#include <string>

int main(){

std::string TheString{"The string: welcome"};
std::cout<<TheString<<std::endl;

std::string length{"The length of the string: "};
std::cout<<length<<length.length()<<std::endl;

std::string charat1{"The char at index 1 of the string: "};
std::cout<<charat1<<charat1[1]<<std::endl;

std::string empty{"Is the string empty: "};
std::cout<<empty<<empty.empty()<<std::endl;

std::string substring{"first second"};
std::cout<<substring.substr(3,4)<<std::endl;

std::cout<<substring.replace(0,5,"third")<<std::endl;

std::string begin{"begingin "};
std::string end{"end"};
std::cout<<begin.append(end)<<std::endl;

begin += end;
std::cout<<begin<<std::endl;

std::string insert{"insert "};
std::string i2{"aaaa bbbb"};
std::cout<<i2.insert(5,insert)<<std::endl;

}