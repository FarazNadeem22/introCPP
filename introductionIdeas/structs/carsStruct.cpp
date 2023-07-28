#include <iostream>

// Define a struct called "Car" to represent car information.
struct Car
{
    std::string model; // Car model, e.g., Accord, Camry, etc.
    int year;          // Year the car was manufactured.
    std::string color; // Car color, e.g., Green, White, etc.
};

// Function prototype for printing car information.
void printCar(Car car);
void paintCar(Car &car, std::string color);

int main()
{
    // Declare two Car objects named car1 and car2.
    Car car1, car2;

    // Set properties for car1.
    car1.model = "Accord";
    car1.year = 2022;
    car1.color = "Green";

    // Set color of car1 to Red
    paintCar(car1, "Red");

    // Set properties for car2.
    car2.model = "Camry";
    car2.year = 2021;
    car2.color = "White";

    // Print car1's information using the printCar function.
    printCar(car1);
    std::cout << std::endl;

    // Print car2's information using the printCar function.
    printCar(car2);

    return 0;
}

// Function definition for printing car information.
void printCar(Car car)
{
    // Print the car's model, year, and color.
    std::cout << car.model << std::endl;
    std::cout << car.year << std::endl;
    std::cout << car.color << std::endl;
}

// Function to change the color of a car.
// It takes a reference to a Car object (car) and a new color as input.
void paintCar(Car &car, std::string color)
{
    // The function takes the car object by reference (using '&').
    // This means that any changes made to the car inside the function will affect the original car outside the function.

    // Update the car's color to the new specified color.
    car.color = color;

    // Since the function is void, it does not return any value.
    // Instead, it directly modifies the car's color using the reference.
}