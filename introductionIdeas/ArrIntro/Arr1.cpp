#include <iostream>
#include <iomanip>

// Using declarations to avoid repetitive std::
using std::cin, std::cout, std::string, std::getline, std::ws, std::stoi;

int main()
{
    // Array of strings to store car names
    string cars[3];

    // Assigning values to elements in the cars array
    cars[0] = "Corvette";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    // Calculating the size of the cars array
    int size = sizeof(cars) / sizeof(cars[0]);

    // Outputting section header for the simple for loop
    cout << "*******************\n";
    cout << "   Simple for Loop  \n";
    cout << "*******************\n";

    // Using a simple for loop to iterate through the cars array
    for (int i = 0; i < size; i++)
    {
        cout << cars[i] << std::endl;
    }

    // Outputting section header for the for-each loop
    cout << "*******************\n";
    cout << "   For Each Loop  \n";
    cout << "*******************\n";

    // Using a for-each loop to iterate through the cars array
    for (string car : cars)
    {
        cout << car << std::endl;
    }

    // Outputting final section separator
    cout << "*******************\n";

    return 0;
}
