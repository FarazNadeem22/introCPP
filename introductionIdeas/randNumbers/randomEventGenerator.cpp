#include <iostream>
#include <ctime>

using std::cin, std::cout, std::string;

int main()
{
    srand(time(0));

    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        cout << "You win $100 dollars.";
        break;
    case 2:
        cout << "You win concert tickets.";
        break;
    case 3:
        cout << "You win nothing.";
        break;
    case 4:
        cout << "You win an iPhone.";
        break;
    case 5:
        cout << "You win Amazon gift card.";
        break;

    default:
        break;
    }

    return 0;
}