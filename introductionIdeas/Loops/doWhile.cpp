#include <iostream>
#include <cctype>

using std::cin, std::cout, std::string, std::ws, std::getline, std::isdigit;

int main()
{
    bool condition = true;
    string num;
    int number;
    char choice;

    do
    {
        while (true)
        {
            cout << "Enter a number(integer): ";
            cin >> num;

            bool isDigit = true;
            for (char c : num)
            {
                if (!isdigit(c))
                {
                    isDigit = false;
                    break;
                }
            }

            if (isDigit)
            {
                cout << "isdigit passed, ";
                number = std::stoi(num);
                break;
            }
            else
            {
                cout << "Input is not an integer. Please try again.\n";
            }
        }

        if (number % 2 == 0)
        {
            cout << "Even number.\n";
        }
        else
        {
            cout << "Odd number.\n";
        }

        while (true)
        {
            cout << "Would you like to test another number? Y/n: ";
            cin >> choice;
            choice = toupper(choice);
            if (choice == 'Y' || choice == 'N')
            {
                if (choice == 'N')
                {
                    condition = false;
                }
                break;
            }
            else
            {
                cout << "Incorrect choice, try again.\n";
            }
        }

        choice = toupper(choice);

    } while (condition);

    return 0;
}