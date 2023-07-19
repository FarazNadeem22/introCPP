#include <iostream>
#include <chrono>
#include <thread>

// Using const parameter

using std::cin, std::cout, std::string;

void sleepSeconds(int seconds);
void clear();
void printInfo(const string &name, const int &age);

int main()
{
    clear();
    string name = "Faraz";
    int age = 48;

    printInfo(name, age);

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

void printInfo(const string &name, const int &age)
{
    /*NOTE: Because of the const parameter the complier will not allow for changes made to name and age even if they have been passed
            by ref. The compiler will throw the following  error

            tempCodeRunnerFile.cpp:1:5: error: 'name' does not name a type
            1 |     name = "False Name";
             tempCodeRunnerFile.cpp:2:5: error: 'age' does not name a type
            2 |     age = 0;

    */

    // name = "False Name";
    // age = 0;

    cout << name << std::endl;
    cout << age;
}