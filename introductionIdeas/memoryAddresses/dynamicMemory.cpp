#include <iostream>
#include <string>
#include <cctype>

int getInput();
void readInput(char *arr, int length);
void printArr(char *arr, int length);

int main()
{
    char *ptrGrades = NULL;
    int number;

    number = getInput();
    ptrGrades = new char[number];

    readInput(ptrGrades, number);
    printArr(ptrGrades, number);

    return 0;
}

int getInput()
{
    std::string input;
    bool isValid = true;
    int number;

    do
    {
        std::cout << "How many grades do you want to enter: ";
        std::cin >> input;
        for (int i = 0; i < input.length(); i++)
        {
            if (!isdigit(input[i]))
            {
                isValid = false;
                break;
            }
        }

    } while (!isValid);

    number = std::stoi(input);
    return number;
}

void readInput(char *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cin >> arr[i];
    }
}

void printArr(char *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i];
    }
}