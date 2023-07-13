#include <iostream>
// #include <cctype>

using std::cin;
using std::cout;

int main()
{

    double temp, newTemp;
    char unit;

    cout << "******** Temperature Conversion ***********";
    cout << "F = Fahrenheit\n";
    cout << "C = Celsius\n";
    cout << "Wht unit would you like to convert to: ";
    cin >> unit;
    unit = toupper(unit);

    if (unit == 'F')
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;

        newTemp = 1.8 * temp + 32;

        cout << temp << " degrees C =" << newTemp << " degrees Fahrenheit.";
    }
    else if (unit == 'C')
    {
        cout << "Enter temperature in Fahrenheit\n: ";
        cin >> temp;

        newTemp = (temp - 32) / 1.8;

        cout << temp << " degrees F =" << newTemp << " degrees Celsius.";
    }
    else
    {
        cout << "In correct selection, please select either F or C.";
    }

    cout << "*******************************************";

    return 0;
}