#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <limits>  // For std::numeric_limits
#include <cstdlib> // For std::streamsize

// Function declarations
int getInput();
void readInput(char *arr, int length);
void printArr(char *arr, int length);

int main()
{
    char *ptrGrades = nullptr; // Pointer to store dynamically allocated memory for grades array
    int number;

    number = getInput();          // Get the number of grades from the user
    ptrGrades = new char[number]; // Dynamically allocate memory for the grades array

    readInput(ptrGrades, number); // Read the grades from the user
    printArr(ptrGrades, number);  // Print the grades

    delete[] ptrGrades; // Free the allocated memory

    return 0;
}

// Function to get the number of grades from the user
int getInput()
{
    std::string input;
    int number;

    while (true)
    {
        bool isValid = true; // Initialize isValid to true for each iteration

        // Prompt the user to enter the number of grades
        std::cout << "How many grades do you want to enter: ";
        std::cin >> input;

        // Check if the input contains only digits
        for (int i = 0; i < input.length(); i++)
        {
            if (!std::isdigit(input[i])) // Using isdigit() from the <cctype> header
            {
                isValid = false;
                std::cout << "Invalid input! Please enter a valid number.\n";
                std::cin.clear();                                                   // Clear the error flag on cin
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining characters in the input buffer
                break;
            }
        }

        // If input is valid, break out of the loop
        if (isValid)
            break;
    }

    // Convert the valid input to an integer and return it
    number = std::stoi(input);
    return number; // Return the entered number of grades
}

// Function to read grades from the user and store them in an array
void readInput(char *arr, int length)
{
    bool isValid = true;
    for (int i = 0; i < length; i++)
    {
        // Prompt the user to enter each grade

        char temp;
        do
        {
            std::cout << "Enter grade " << i + 1 << ": ";
            std::cin >> temp;
            temp = toupper(temp);
            if (temp == 'A' || temp == 'B' || temp == 'C' || temp == 'D' || temp == 'F')
            {
                arr[i] = temp; // Store the value in the arr
                isValid = false;
                break;
            }
            else
            {
                std::cout << "\nIncorrect grade (A, B, C, D ,E, F)\n";
            }
        } while (!isValid);
    }
}

// Function to print the grades from the array
void printArr(char *arr, int length)
{
    // Print the header for the grades
    std::cout << "Grades: ";

    for (int i = 0; i < length; i++)
    {
        // std::cout << toupper(arr[i]) << " "; // Print each grade in the array with a space separator
        std::cout << static_cast<char>(std::toupper(arr[i])) << " ";
    }

    std::cout << std::endl; // Move to the next line after printing the grades
}