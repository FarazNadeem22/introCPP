#include <iostream>
#include <iomanip>

// Using declarations to avoid repetitive std::
using std::cin, std::cout, std::string, std::getline, std::ws, std::stoi;

int main()
{
    // 2D array of strings representing cars in a grid format
    string cars[][3] = {{"Mustang", "Escape", "F-150"},
                        {"Corvet", "Silverado", "Eqinox"},
                        {"Corolla", "Rav4", "Land Cruiser"}};

    // Printing individual elements of the 2D array
    cout << cars[0][0] << ", ";
    cout << cars[0][1] << ", ";
    cout << cars[0][2] << std::endl;
    cout << cars[1][0] << ", ";
    cout << cars[1][1] << ", ";
    cout << cars[1][2] << std::endl;
    cout << cars[2][0] << ", ";
    cout << cars[2][1] << ", ";
    cout << cars[2][2] << std::endl;

    // Calculating the number of rows and columns in the 2D array
    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars[0]) / sizeof(cars[0][1]);

    // Separator between the individual element output and the 2D array grid
    cout << std::endl
         << "**************" << std::endl;

    // Printing the 2D array in a grid format using nested loops
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << cars[i][j] << " ";
        }
        cout << std::endl;
    }

    return 0;
}
