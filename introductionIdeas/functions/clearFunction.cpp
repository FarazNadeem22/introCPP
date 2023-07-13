#include <iostream>
#include <chrono>
#include <thread>

using std::cin, std::cout, std::string;

void sleepSeconds(int seconds)
{
    cout << "Sleeping for " << seconds << "seconds\n";
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void clear()
{
    system("cls");
}

int main()
{

    int seconds;

    cout << "Enter sleep time in seconds: ";
    cin >> seconds;

    sleepSeconds(seconds);
    clear();

    cout << "Good bye.";
    return 0;
}
