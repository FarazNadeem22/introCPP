#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>

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

int convertHexToDec(const string &HEX)
{
    int decimalValue = 0;

    for (int i = 0; i < HEX.length(); i++)
    {
        char digit = HEX[i];
        int digitalValue = 0;

        if (isdigit(digit))
        {
            digitalValue = digit - '0';
        }
        else if (isalpha(digit))
        {
            digitalValue = toupper(digit) - 'A' + 10;
        }
        else
        {
            cout << "Invalid hexadecimal input: " << HEX << std::endl;
            return 0;
        }

        decimalValue += digitalValue * std::pow(16, HEX.length() - i - 1);
    }

    return decimalValue;
}

int main()
{
    string name = "Faraz";
    int age = 40;
    bool condition = true;

    // Note these are not the desired outputs we it will do for now
    cout << "Hex value of name: " << &name << " && decimal value: " << convertHexToDec(name) << std::endl;
    cout << "Hex value of age: " << &age << " && decimal value: " << convertHexToDec(std::to_string(age)) << std::endl;
    cout << "Hex value of condition: " << &condition << " && decimal value: " << convertHexToDec(std::to_string(condition)) << std::endl;

    return 0;
}
