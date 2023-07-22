#include <iostream>
#include <string>
#include <cctype>

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
    bool isValid = true;
    int number;

    do
    {
        // Prompt the user to enter the number of grades
        std::cout << "How many grades do you want to enter: ";
        std::cin >> input;

        // Check if the input contains only digits
        for (int i = 0; i < input.length(); i++)
        {
            if (!std::isdigit(input[i])) // Using isdigit() from the <cctype> header
            {
                isValid = false;
                break;
            }
        }

    } while (!isValid);

    // Convert the valid input to an integer and return it
    number = std::stoi(input);
    return number; // Return the entered number of grades
}

// Function to read grades from the user and store them in an array
void readInput(char *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        // Prompt the user to enter each grade
        std::cout << "Enter grade " << i + 1 << ": ";

        std::cin >> arr[i]; // Read each grade and store it in the array
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