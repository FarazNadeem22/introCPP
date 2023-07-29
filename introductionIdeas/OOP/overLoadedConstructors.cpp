/*
In this code, a class Pizza is defined to represent a pizza with two optional toppings. The class has three constructors: a default constructor with no arguments, a constructor with one argument to set the first topping, and a constructor with two arguments to set both toppings.

In the main() function, three objects of the Pizza class, pizza1, pizza2, and pizza3, are created. Each object represents a different pizza with unique toppings. The appropriate constructor is used to set the toppings of each pizza object based on the provided arguments.

After creating the objects and setting their toppings, the code prints the toppings of each pizza using std::cout. It demonstrates how the toppings of each pizza object are accessible through the public member variables.

Overall, this code demonstrates the use of a simple Pizza class with multiple constructors to create and manipulate objects representing different pizzas and access their toppings.
*/

#include <iostream>

// Define a class called "Pizza"
class Pizza
{
public:
    std::string topping1; // Public member variable to store the first topping
    std::string topping2; // Public member variable to store the second topping

    // Default constructor for the Pizza class with no arguments
    // This constructor is empty and does not perform any specific initialization
    Pizza()
    {
        // No actions required in this constructor
    }

    // Constructor for the Pizza class with one argument (topping1)
    // This constructor is used when creating a pizza with only one topping
    Pizza(std::string topping1)
    {
        this->topping1 = topping1; // Set the value of topping1 using the provided argument
    }

    // Constructor for the Pizza class with two arguments (topping1 and topping2)
    // This constructor is used when creating a pizza with two toppings
    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1; // Set the value of topping1 using the first provided argument
        this->topping2 = topping2; // Set the value of topping2 using the second provided argument
    }
};

int main()
{
    // Create three objects (instances) of the Pizza class: pizza1, pizza2, and pizza3
    // Each object represents a different pizza with toppings
    Pizza pizza1("Olives");           // Create a pizza with one topping ("Olives")
    Pizza pizza2("Olives", "Onions"); // Create a pizza with two toppings ("Olives" and "Onions")
    Pizza pizza3;                     // Create a default pizza with no toppings

    // Print the value of the first topping of pizza1 using std::cout
    std::cout << pizza1.topping1 << std::endl; // Print "Olives"

    // Print the values of both toppings of pizza2 using std::cout
    std::cout << pizza2.topping1 << ", " << pizza2.topping2 << std::endl; // Print "Olives, Onions"

    // The program execution completes successfully, so return 0 to indicate success
    return 0;
}