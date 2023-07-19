#include <iostream>
#include <chrono>
#include <thread>

/*
    Luhn Algorithm
    ---------------
    1. sum all odd digits
    2. sum all even digits
    3. add the two sums together
    4. if the result is divisible by 10 then the credit card  number is valid
*/

using std::cin, std::cout, std::string, std::stoi;

void sleepSeconds(int seconds);
void clear();
int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main()
{
    string cardNumber;
    int result = 0;

    cout << "Enter a Credit Card Number: ";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0)
    {
        cout << "Valid!";
    }
    else
    {
        cout << "Not valid!";
    }

    cout << "Result: " << result;

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

int getDigit(const int number)
{
    return number % 10 + (number / 10) % 10;
}

int sumOddDigits(const string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 1)
    {
        int digit = cardNumber[i] - '0'; // Convert the character to an integer digit

        // Check if the index (counting from the right) is odd
        if ((cardNumber.size() - i) % 2 == 1)
        {
            sum += digit;
        }
    }
    cout << "\nThe sum of odd digits is: " << sum << std::endl;
    return sum; // Return the sum of odd-positioned digits
}

int sumEvenDigits(const string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 1)
    {
        int digit = cardNumber[i] - '0'; // Convert the character to an integer digit

        // Check if the index (counting from the right) is even
        if ((cardNumber.size() - i) % 2 == 0)
        {
            sum += digit;
        }
    }
    cout << "\nThe sum of odd digits is: " << sum << std::endl;
    return sum; // Return the sum of even-positioned digits
}
