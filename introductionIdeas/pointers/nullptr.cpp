#include <iostream>
#include <chrono>
#include <thread>

using std::cin, std::cout, std::string, std::stoi;

void sleepSeconds(int seconds);
void clear();

int main()
{
    /*
        null pointers: a ptr that points to nothing

    */
    clear();

    int *ptr = nullptr;
    int x = 22;

    ptr = &x;

    if (ptr == nullptr)
    {
        cout << "Pointer is null. No address assigned\n";
    }
    else
    {
        cout << "Address was assigned.\n";
        cout << "Address: " << ptr << "\nValue at that address: " << *ptr;
    }

    return 0;
}

void sleepSeconds(int seconds)
{
    // cout << "Sleeping for " << seconds << " seconds\n";
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void clear()
{
    system("cls");
}
