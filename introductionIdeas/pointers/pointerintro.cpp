#include <iostream>
#include <chrono>
#include <thread>

using std::cin, std::cout, std::string, std::stoi;

void sleepSeconds(int seconds);
void clear();

int main()
{
    /*
        pointers: variable that stores a emory address of another variable
        & address of operator
        * dereference operator
    */
    clear();

    string name = "Faraz";
    string *ptrName = &name;

    int age = 40;
    int *ptrAge = &age;

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptrArr = &arr[0];

    cout << *ptrName << " is stored at memory location: " << ptrName << std::endl;
    cout << *ptrAge << " is stored at memory location: " << ptrAge << std::endl;

    cout << "******************************************************\n";
    cout << *ptrArr << " is stored at memory location: " << ptrArr << std::endl;
    // cout << *ptrArr << " is stored at memory location: " << ptrArr[1] << std::endl;
    cout << "\n******************************************************\n";

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
