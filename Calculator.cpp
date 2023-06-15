#include <iostream>
#include <string>

// + - * /  || trigonometric and logarithmic functions
// classes and functions

// w klasie sa funkcje obliczania
// w main klasa, podaj liczbe, switch z case

class Calculator
{
public:
    double add(double a, double b)
    {
        return a + b;
    }
    double substract(double a, double b)
    {
        return a - b;
    }
    double multiply(double a, double b)
    {
        return a * b;
    }
    double divide(double a, double b)
    {
        return a / b;
    }
};

int main()
{
    Calculator Calculator;

    double num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Choose symbol: + | - | * | / ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    double result;

    switch (operation)
    {
    case '+':
        result = Calculator.add(num1, num2);
        std::cout << "= " << result << std::endl;
        break;
    case '-':
        result = Calculator.substract(num1, num2);
        std::cout << "= " << result << std::endl;
        break;
    case '*':
        result = Calculator.multiply(num1, num2);
        std::cout << "= " << result << std::endl;
        break;
    case '/':
        result = Calculator.divide(num1, num2);
        std::cout << "= " << result << std::endl;
        break;
    default:
            std::cout << "ERROR" << std::endl;
            break;
    }

    return 0;
}