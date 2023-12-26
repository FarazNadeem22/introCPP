# Array Iteration of Car Names - C++ Program Explanation

This C++ program demonstrates two different methods for iterating through an array of strings (`cars`) containing car model names: using a simple `for` loop and a for-each loop.

## Code Overview

- **`#include` Directives:** The code includes necessary header files (`<iostream>` and `<iomanip>`) to work with input/output operations and manipulate output formatting.
- **Using Declarations:** Using declarations are utilized to avoid repetitive usage of the `std::` namespace for commonly used entities like `cin`, `cout`, `string`, etc.

## `main()` Function

- **Array Initialization:** An array named `cars` of size 3 is declared to store strings representing car model names (`Corvette`, `Mustang`, `Camry`).
- **Assigning Values:** Each element of the `cars` array is assigned a car model name.
- **Calculating Array Size:** The size of the `cars` array is calculated using the `sizeof` operator to determine the number of elements in the array.

## Output Section Headers

- **Simple for Loop Section:** The program prints a section header and uses a simple `for` loop to iterate through the `cars` array, printing each car model name individually.
- **For-Each Loop Section:** Another section header is displayed, and a for-each loop is utilized to iterate through the `cars` array, printing each car model name without explicitly using index values.

## Output

The program outputs the car model names in two different formats using both looping techniques:

1. **Simple for Loop Output:**
   - Prints each car model name individually using a simple `for` loop.
   - Example output:
     ```
     Corvette
     Mustang
     Camry
     ```

2. **For-Each Loop Output:**
   - Utilizes a for-each loop to display each car model name.
   - Example output:
     ```
     Corvette
     Mustang
     Camry
     ```

## How to Run

1. **Compilation:** Compile the C++ code using a C++ compiler (e.g., g++).
2. **Execution:** Run the compiled program to observe the display of car model names using both looping techniques.

Author [Muhammad Ali Faraz]
