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

int main()
{
    // Declare two Car objects named car1 and car2.
    Car car1, car2;

    // Set properties for car1.
    car1.model = "Accord";
    car1.year = 2022;
    car1.color = "Green";

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