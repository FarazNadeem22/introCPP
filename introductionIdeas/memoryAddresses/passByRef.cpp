#include <iostream>
#include <chrono>
#include <thread>

// NOTE: using & in swap function to pass by reference

using std::cin, std::cout, std::string;

void sleepSeconds(int seconds)
{
    // cout << "Sleeping for " << seconds << " seconds\n";
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void clear()
{
    system("cls");
}

void printXY(string x, string y)
{
    cout << "X: " << x << std::endl;
    cout << "Y: " << y << std::endl;
}

void swap(string &x, string &y)
{
    string temp = x;
    x = y;
    y = temp;
}

int main()
{

    clear();
    string x = "Water";
    string y = "Ice";
    string temp;

    printXY(x, y);
    cout << "*********************\n";

    swap(x, y);
    printXY(x, y);

    return 0;
}