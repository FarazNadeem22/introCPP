#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{
    int month;

    cout << "Enter the month (1-4): ";
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "February";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;
    default:
        cout << "Please enter numbers between 1-4 only";
    }

    return 0;
}