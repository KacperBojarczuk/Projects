#include <iostream>
#include <cmath>

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
        if (b != 0)
        {
            return a / b;
        }
        else
        {
            std::cout << "Error: Divided by Zero" << std::endl;
            return 0.0;
        }
    }
    double sin(double a)
    {
        return std::sin(a);
    }

    double cos(double a)
    {
        return std::cos(a);
    }

    double tan(double a)
    {
        return std::tan(a);
    }

    double log(double a)
    {
        if (a > 0)
        {
            return std::log(a);
        }
        else
        {
            std::cout << "Error: Non-positive logarithm" << std::endl;
            return 0.0;
        }
    }
};

int main()
{
    Calculator Calculator;

    double num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Choose symbol: + | - | * | /  ||  s | c | t | l -> ";
    std::cin >> operation;

    bool triorlog = false; // Flaga informująca, czy wykonano operację trygonometryczną/logarytmiczną

    if (operation == 's' || operation == 'c' || operation == 't' || operation == 'l')
    {
        switch (operation)
        {
        case 's':
            std::cout << "Sinus: " << Calculator.sin(num1) << std::endl;
            triorlog = true;
            break;
        case 'c':
            std::cout << "Cosinus: " << Calculator.cos(num1) << std::endl;
            triorlog = true;
            break;
        case 't':
            std::cout << "Tangent: " << Calculator.tan(num1) << std::endl;
            triorlog = true;
            break;
        case 'l':
            std::cout << "Logarithm: " << Calculator.log(num1) << std::endl;
            triorlog = true;
            break;
        default:
            std::cout << "Enter second number: ";
            std::cin >> num2;
            break;
        }
    }

    if (!triorlog)
    {
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
    }

    return 0;
}