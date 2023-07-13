#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{
    int age;

    cout << "Enter you age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Welcome to the program.";
    }
    else if (age <= 0)
    {
        cout << "This entry, " << age << " is incorrect";
    }
    else
    {
        cout << "Go away kid.";
    }

    return 0;
}
