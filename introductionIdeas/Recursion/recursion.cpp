#include <iostream>
#include <string>
#include <chrono>
#include <thread>

void walk(int steps);
void walkRecursively(int steps);

int main()
{
    system("cls");
    walk(10);
    std::cout << "\nSleeping for 2 seconds\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    walkRecursively(10);
    return 0;
}

void walk(int steps)
{
    for (int i = 0; i < steps; i++)
    {
        std::cout << "You take a step, this is step, " << i + 1 << std::endl;
    }
}

void walkRecursively(int steps)
{
    // base case
    if (steps > 0)
    {
        std::cout << "You take a step" << std::endl;
        walkRecursively(steps - 1);
    }
}