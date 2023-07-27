#include <iostream> // For input/output stream operations

// Function template to find the maximum value between two elements of different types
template <typename T, typename U>
auto max(T x, U y)
{
    // The ternary operator is used here to determine the maximum value between 'x' and 'y'
    // If 'x' is greater than 'y', return 'x', otherwise return 'y'
    return (x > y) ? x : y;
}

int main()
{
    // The 'max' function is called with two arguments, 2 (an integer) and 7.4 (a double) in this case.
    // The function template will deduce the types 'T' and 'U' as 'int' and 'double' respectively, based on the arguments provided.
    // The 'max' function will compare the two arguments and return the maximum value (7.4).
    // The 'std::cout' statement will output the result (7.4) to the console.
    std::cout << max(2, 7.4); // Output: 7.4

    return 0; // Return 0 to indicate successful program execution
}