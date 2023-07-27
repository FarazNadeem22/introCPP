#include <iostream> // For input/output stream operations
#include <string>   // For string-related operations
#include <chrono>   // For time-related operations
#include <thread>   // For multi-threading operations

// Function to calculate factorial recursively
int factorial(int number);

// Function to calculate factorial using a loop
int factorialLoop(int number);

int main()
{
    system("cls"); // Clear the console screen (works on Windows, might not work on other platforms)

    // Calculate the factorial using the recursive function
    std::cout << "Factorial: " << factorial(10); // Output: Factorial: <factorial_value>

    std::cout << "\nSleeping for 2 seconds\n"; // Output: Sleeping for 2 seconds

    // Pause the execution for 2 seconds using std::this_thread::sleep_for()
    std::this_thread::sleep_for(std::chrono::seconds(2));

    // Clearing the screen using system("cls") is commented out (not used in this program)
    std::cout << "Factorial Loop: " << factorialLoop(10);

    return 0; // Return 0 to indicate successful program execution
}

// Recursive function to calculate the factorial of a number
int factorial(int number)
{
    int result = 1; // Initialize the result to 1
    if (number > 1) // If the number is greater than 1, calculate the factorial
    {
        // Recursively call the factorial function for (number - 1) and multiply it with the current number
        return number * factorial(number - 1);
    }
    else // Base case: when the number is 0 or 1, return 1 (factorial of 0 and 1 is 1)
    {
        return 1;
    }
}

// Function to calculate the factorial of a number using a loop
int factorialLoop(int number)
{
    int result = 1;                  // Initialize the result to 1
    for (int i = number; i > 0; i--) // Loop from 'number' to 1
    {
        result *= i; // Multiply 'result' with the current value of 'i'
    }
    return result; // Return the final result
}