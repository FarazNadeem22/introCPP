#include <iostream>
#include <iomanip>

using std::cin, std::cout, std::string, std::getline, std::ws, std::stoi;

void sort(int arr[], int size);

int main()
{
    const int SIZE = 30;
    int i = 0;
    string foods[3];
    string cities[SIZE];

    cout << "*************************\n";
    fill(foods, foods + 3, "Pizza");
    for (string food : foods)
    {
        cout << food << std::endl;
    }

    fill(cities, cities + (SIZE / 3), "Boston");
    fill(cities + (SIZE / 3), cities + (SIZE / 3) * 2, "Karachi");
    fill(cities + (SIZE / 3) * 2, cities + SIZE, "Fredonia");

    cout << "*************************\n";
    for (string city : cities)
    {
        cout << i + 1 << ". " << city << std::endl;
        i++;
    }
    cout << "*************************";

    return 0;
}