#include <iostream>
#include <string>
#include <random>
using namespace std;

string losowanie();

int main()
{
    string selection{};
    string quit{};

    cout << "Welcome to the Rock,Paper,Scissors game!" << endl;
    do
    {
        cout << "Enter your choice: rock | paper | scissors" << endl;
        cin >> selection;

        if (selection == "rock")
        {
            cout << losowanie() << " vs rock" << endl;
            if (losowanie() == "[scissors]")
            {
                cout << "Congratulations, you won!" << endl;
                cout << "Wanna play again? y/n    ";
                cin >> quit;
            }
            else if (losowanie() == "[rock]")
            {
                cout << "Draw!" << endl;
                cout << "Wanna play again? y/n    ";
                cin >> quit;
            }
            else
            {
                cout << "Im sorry, you lost!" << endl;
                cout << "Wanna play again? y/n    ";
                cin >> quit;
            }
        }
        else if (selection == "paper")
        {
            cout << losowanie() << " vs paper" << endl;
            if (losowanie() == "[rock]")
            {
                cout << "Congratulations, you won!" << endl;
                cout << "Wanna play again? y/n    ";
                cin >> quit;
            }
            else if (losowanie() == "[paper]")
            {
                cout << "Draw!" << endl;
                cout << "Wanna play again? y/n    ";
                cin >> quit;
            }
            else
            {
                cout << "Im sorry, you lost!" << endl;
                cout << "Wanna play again? y/n    ";
                cin >> quit;
            }
        }
        else if (selection == "scissors")
        {
            cout << losowanie() << " vs scissors" << endl;
            if (losowanie() == "[paper]")
            {
                cout << "Congratulations, you won!" << endl;
                cout << "Wanna play again? y/n    ";
                cin >> quit;
            }
            else if (losowanie() == "[scissors]")
            {
                cout << "Draw!" << endl;
                cout << "Wanna play again? y/n    ";
                cin >> quit;
            }
            else
            {
                cout << "Im sorry, you lost!" << endl;
                cout << "Wanna play again? y/n    ";
                cin >> quit;
            }
        }
        else
        {
            cout << "ERROR" << endl;
        }

    } while (quit != "n");

    return 0;
}

string losowanie()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    string pool[] = {"[rock]", "[paper]", "[scissors]"};
    int poolSize = sizeof(pool) / sizeof(pool[0]);
    int randomIndex = rand() % poolSize;
    return pool[randomIndex];
}