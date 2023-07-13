#include <iostream>
#include <iomanip>

using std::cin, std::cout, std::string, std::getline, std::ws, std::stoi;

double getTotal(double prices[], int size);

int main()
{
    double prices[] = {29.99,
                       34.99,
                       19.99,
                       9.99,
                       7.99,
                       299.99};
    int size = sizeof(prices) / sizeof(prices[0]);

    double total = getTotal(prices, size);

    cout << "Total: $" << total;
    return 0;
}

double getTotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}