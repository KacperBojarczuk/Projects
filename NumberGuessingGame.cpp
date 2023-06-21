#include <iostream>
#include <cstdlib>
#include <time.h>

int main()
{
    char lvl;

    srand(time(0));
    int number;
    std::cout << "Choose difficulty 1 -> 1-100 | 2 -> 1-1000";
    std::cin >> lvl;
    switch (lvl)
    {
    case '1':
        number = rand() % 100 + 1;
        break;
    case '2':
        number = rand() % 1000 + 1;
        break;
    }

    int guess;
    do
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        if (guess < number)
            std::cout << "more" << std::endl;
        else if (guess > number)
            std::cout << "less" << std::endl;
        else
            std::cout << "YES!" << std::endl;
    } while (guess != number);

    return 0;
}