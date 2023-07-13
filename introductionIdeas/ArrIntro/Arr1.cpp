#include <iostream>
#include <iomanip>

using std::cin, std::cout, std::string, std::getline, std::ws, std::stoi;

int main()
{
    string cars[3];

    cars[0] = "Corvette";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    int size = sizeof(cars) / sizeof(cars[0]);

    cout << "*******************\n";
    cout << "   Simple for Loop  \n";
    cout << "*******************\n";
    for (int i = 0; i < size; i++)
    {
        cout << cars[i] << std::endl;
    }

    cout << "*******************\n";
    cout << "   For Each Loop  \n";
    cout << "*******************\n";
    for (string car : cars)
    {
        cout << car << std::endl;
    }
    cout << "*******************\n";
    return 0;
}