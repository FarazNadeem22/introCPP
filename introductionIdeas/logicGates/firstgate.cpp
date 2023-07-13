#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{
    int temp;
    char type;

    cout << "Select F or C: ";
    cin >> type;
    type = toupper(type);

    cout << "Enter the temperature in " << type << ": ";
    cin >> temp;

    switch (type)
    {
    case 'F':
        if (temp < 0)
        {
            cout << "Brrrrrr. Its freeing";
        }
        else if (temp >= 0 && temp <= 32)
        {
            cout << "Its freezing";
        }
        else if (temp > 32 && temp <= 50)
        {
            cout << "Its nippy";
        }
        else if (temp > 50 && temp <= 70)
        {
            cout << "Cool Breeze";
        }
        else if (temp > 70 && temp <= 80)
        {
            cout << "Nice weather.";
        }
        else if (temp > 80 && temp <= 100)
        {
            cout << "Its hot out.";
        }
        else if (temp > 100 && temp <= 130)
        {
            cout << "Its a scorcher";
        }
        else
        {
            cout << "Get out of there now or you will die.";
        }
        break;
    case 'C':
        if (temp < 0)
        {
            cout << "Freezing";
        }
        else if (temp >= 0 && temp <= 15)
        {
            cout << "Its nippy";
        }
        else if (temp > 15 && temp <= 26)
        {
            cout << "Nice day.";
        }
        else if (temp > 26 && temp <= 36)
        {
            cout << "Its hot out.";
        }
        else if (temp > 36 && temp <= 44)
        {
            cout << "Its a scorcher";
        }
        else
        {
            cout << "Get out of there now or you will die.";
        }
        break;
    default:
        cout << "Please make correct selection between F or C: ";
        break;
    }

    return 0;
}
