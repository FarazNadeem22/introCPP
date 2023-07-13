#include <iostream>
#include <ctime>

using std::cin, std::cout, std::string;

int main()
{
    int num, guess;
    int tries = 0;

    srand(time(NULL));
    num = rand() % 100 + 1;

    system("cls");
    cout << "************* Number guessing game***************\n";

    do
    {
        cout << "Enter guess between 1 & 100: ";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "Too high.\n";
        }
        else if (guess < num)
        {
            cout << "Too low.\n";
        }
        else
        {
            cout << "Correct!\nYour guess: " << guess << "\nActual number: " << num << "\nNumber of tires: " << tries << '\n';
        }
    } while (guess != num);

    cout << "*************** Good bye ***********************\n";

    return 0;
}