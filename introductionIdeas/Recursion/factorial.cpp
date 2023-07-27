#include <iostream>
#include <string>
#include <chrono>
#include <thread>

int factorial(int number);
int factorialLoop(int number);

int main()
{
    system("cls");
    std::cout << "Factorial: " << factorial(10);
    std::cout << "\nSleeping for 2 seconds\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    // system("cls");
    std::cout << "Factorial Loop: " << factorialLoop(10);

    return 0;
}

int factorial(int number)
{
    int result = 1;
    if (number > 1)
    {
        return number * factorial(number - 1);
    }
    else
    {
        return 1;
    }
}

int factorialLoop(int number)
{
    int result = 1;
    for (int i = number; i > 0; i--)
    {
        result *= i;
    }
    return result;
}