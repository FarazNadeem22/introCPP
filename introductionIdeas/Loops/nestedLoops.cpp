#include <iostream>

using std::cin, std::cout, std::string, std::stoi, std::getline, std::ws, std::system;

int main()
{
    bool keepRunning = true;
    bool isDigit;
    bool firstRun = true;
    char exit;
    string name, outerLoopNumber, innerLoopNumber, msgToDisplay;
    int outerLoopInt, innerLoopInt;

    // Get Name
    system("cls");
    cout << "******************WELCOME TO NESTED LOOPING***************************\n";
    cout << "Hello, enter you name: ";
    getline(cin >> ws, name);

    // Print welcome msg to the screen
    cout << "Welcome to the program, " << name << '\n'
         << "This is a nested looping program.\n";

    do
    {
        if (!firstRun)
        {
            system("cls");
            cout << "Welcome back, " << name << '\n';
        }
        do
        {
            firstRun = false;
            cout << "Enter the number for outer loop: ";
            cin >> outerLoopNumber;

            isDigit = true;
            // Check isDigit
            for (char c : outerLoopNumber)
            {
                if (!isdigit(c))
                {
                    cout << "Incorrect input " << outerLoopNumber << " is not an integer. Try again\n";
                    isDigit = false;
                    break;
                }
            }
        } while (!isDigit);

        do
        {
            cout << "Enter the number for inner loop: ";
            cin >> innerLoopNumber;

            isDigit = true;
            // Check isDigit
            for (char c : innerLoopNumber)
            {
                if (!isdigit(c))
                {
                    cout << "Incorrect input " << innerLoopNumber << " is not an integer. Try again\n";
                    isDigit = false;
                    break;
                }
            }
        } while (!isDigit);

        cout << "\n\nIsDigit passed.\n\n"
             << "Outer loop will use: " << outerLoopNumber << "\nInner loop will use " << innerLoopNumber << '\n'
             << "What msg would you like printed? ";
        getline(cin >> ws, msgToDisplay);

        // convert to integers
        outerLoopInt = stoi(outerLoopNumber);
        innerLoopInt = stoi(innerLoopNumber);

        for (int i = 0; i < outerLoopInt; i++)
        {
            for (int j = 0; j < innerLoopInt; j++)
            {
                // cout << i << ", " << j << ": " << msgToDisplay << '\n';
                cout << msgToDisplay;
            }
            cout << '\n';
        }

        do
        {
            cout << "Would you like to exit? Y/n ";
            cin >> exit;
            exit = toupper(exit);
        } while (exit != 'Y' && exit != 'N');

        if (exit == 'Y')
        {
            keepRunning = false;
        }

    } while (keepRunning);
    system("cls");
    cout << "********Good BYE, " << name << "*************\n";
    return 0;
}