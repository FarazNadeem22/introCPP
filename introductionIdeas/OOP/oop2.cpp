#include <iostream>
/*
In this code, a class Car is defined to represent a car with four attributes: make, model, year, and color. The class also has two member functions: accelerate() and stop(), which are used to perform actions related to the car.

In the main() function, an object of the Car class, car1, is created. It represents a specific car with its properties. The properties (make, model, year, and color) of the car are set using the public member variables of the class.

After setting the properties, the code prints the details of the car (make, model, color, and year) using std::cout. It then calls the member functions accelerate() and stop() to demonstrate that the car is performing these actions.

Overall, this code demonstrates the use of a simple Car class to create and manipulate objects representing different cars and perform actions related to them, such as accelerating and stopping.*/

// Define a class called "Car"
class Car
{
public:
    // Public member variables to store information about a car
    std::string make;  // The car's manufacturer or brand
    std::string model; // The car's model name
    int year;          // The year the car was manufactured
    std::string color; // The color of the car

    // Public member functions to perform actions related to a car
    // The function below prints a message indicating that the car is accelerating.
    void accelerate()
    {
        std::cout << "Accelerating.\n";
    }

    // The function below prints a message indicating that the car is stopping (braking).
    void stop()
    {
        std::cout << "Breaking.\n";
    }
};

int main()
{
    // Create an object (instance) of the Car class called "car1"
    Car car1;

    // Set properties for the car1 object
    car1.make = "Honda";  // Set the car's make (manufacturer or brand) as "Honda"
    car1.model = "Pilot"; // Set the car's model name as "Pilot"
    car1.color = "Blue";  // Set the car's color as "Blue"
    car1.year = 2023;     // Set the car's manufacturing year as 2023

    // Print the properties of car1 using std::cout
    std::cout << car1.make << std::endl;  // Print the car's make ("Honda")
    std::cout << car1.model << std::endl; // Print the car's model ("Pilot")
    std::cout << car1.color << std::endl; // Print the car's color ("Blue")
    std::cout << car1.year << std::endl;  // Print the car's manufacturing year (2023)

    // Call the member functions of car1 to perform actions related to the car
    car1.accelerate(); // Call the accelerate() function to indicate that the car is accelerating
    car1.stop();       // Call the stop() function to indicate that the car is stopping (braking)

    // The program execution completes successfully, so return 0 to indicate success
    return 0;
}