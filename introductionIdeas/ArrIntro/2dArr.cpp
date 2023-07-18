#include <iostream>
#include <iomanip>

using std::cin, std::cout, std::string, std::getline, std::ws, std::stoi;

int main()
{
    string cars[][3] = {{"Mustang", "Escape", "F-150"},
                        {"Corvet", "Silverado", "Eqinox"},
                        {"Corolla", "Rav4", "Land Cruiser"}};

    cout << cars[0][0] << ", ";
    cout << cars[0][1] << ", ";
    cout << cars[0][2] << std::endl;
    cout << cars[1][0] << ", ";
    cout << cars[1][1] << ", ";
    cout << cars[1][2] << std::endl;
    cout << cars[2][0] << ", ";
    cout << cars[2][1] << ", ";
    cout << cars[2][2] << std::endl;

    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars[0]) / sizeof(cars[0][1]);

    cout << std::endl
         << "**************" << std::endl;

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