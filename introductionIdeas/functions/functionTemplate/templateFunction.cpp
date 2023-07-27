#include <iostream> // For input/output stream operations

// Function template to find the maximum value between two elements of the same type
template <typename T>
T max(T x, T y)
{
    // The ternary operator is used here to determine the maximum value between 'x' and 'y'
    // If 'x' is greater than 'y', return 'x', otherwise return 'y'
    return (x > y) ? x : y;
}

int main()
{
    // The 'max' function is called with two arguments, 2 and 7, which are integers in this case.
    // The function template will deduce the type 'T' as 'int' based on the arguments provided.
    // The 'max' function will compare the two integers and return the maximum value (7).
    // The 'std::cout' statement will output the result (7) to the console.
    std::cout << max(2, 7); // Output: 7

    return 0; // Return 0 to indicate successful program execution
}