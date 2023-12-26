#include <iostream>
#include <iomanip>

using std::cin, std::cout, std::string, std::getline, std::ws, std::stoi;

// Function to calculate the total sum of prices in an array.
// Parameters:
//   prices: An array containing prices of items.
//   size: The number of items/prices in the array.
// Returns:
//   The total sum of all prices in the array.
double getTotal(double prices[], int size);

int main()
{
    // Array containing prices of items
    double prices[] = {29.99,
                       34.99,
                       19.99,
                       9.99,
                       7.99,
                       299.99};

    // Determine the number of items/prices in the array
    int size = sizeof(prices) / sizeof(prices[0]);

    // Calculate the total sum of prices
    double total = getTotal(prices, size);

    // Display the total sum of prices
    cout << "Total: $" << total;
    return 0;
}

// Function to calculate the total sum of prices in an array.
double getTotal(double prices[], int size)
{
    double total = 0;

    // Iterate through the prices array and calculate the total sum
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}
