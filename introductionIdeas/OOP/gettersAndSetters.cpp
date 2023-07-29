#include <iostream>

/*
The program is a simple simulation of a Stove class, which represents a stove with a controllable temperature. The Stove class has three essential components: a default constructor, a public member function to get the current temperature, and a public member function to set the temperature.

Upon creating a Stove object, the default constructor automatically initializes the stove's temperature to 0. The class enforces a temperature range between 0 and 100, ensuring that the stove's temperature does not fall below 0 or exceed 100.

The "setTemperature" function allows users to set the temperature of the stove. If the provided temperature is less than 0, the stove's temperature is set to 0 (minimum value). If the provided temperature is greater than 100, the stove's temperature is set to 100 (maximum value). Otherwise, the temperature is set to the provided value within the valid range.

In the main function, a Stove object called "stove" is created. The program then sets the stove's temperature to 45 using the "setTemperature" function. It then retrieves and prints the current temperature of the stove using the "getTemperature" function.

Overall, the program demonstrates how to use a simple Stove class with proper encapsulation and validation to control and monitor the temperature of the stove within a specific range.
*/

// Define a class called "Stove"
class Stove
{
public:
    // Default constructor for the Stove class
    Stove()
    {
        // The default constructor is automatically called when a new Stove object is created.
        // Here, we are calling the setTemperature() member function with the initial value of 0.
        // This ensures that the stove's temperature is properly initialized to 0 when an object is created.
        setTemperature(temperature);
    }

    // Public member function to get the current temperature of the stove
    int getTemperature()
    {
        // The function returns the current temperature of the stove.
        // It simply returns the value of the private member variable "temperature".
        return this->temperature;
    }

    // Public member function to set the temperature of the stove
    void setTemperature(int temperature)
    {
        // This function is used to set the temperature of the stove.
        // It takes an integer argument "temperature" that represents the desired temperature.

        // Check if the provided temperature is less than 0 (below the minimum value)
        if (temperature < 0)
        {
            // If the temperature is less than 0, set the stove's temperature to the minimum value, which is 0.
            this->temperature = 0;
        }
        // Check if the provided temperature is greater than 100 (above the maximum value)
        else if (temperature > 100)
        {
            // If the temperature is greater than 100, set the stove's temperature to the maximum value, which is 100.
            this->temperature = 100;
        }
        else
        {
            // If the provided temperature is within the valid range of 0 to 100 (inclusive),
            // set the stove's temperature to the provided value.
            this->temperature = temperature;
        }
    }

private:
    int temperature = 0; // Private member variable to store the stove's temperature
    // The private member variable "temperature" is used to store the current temperature of the stove.
    // By making it private, we encapsulate the data and control access to it through the public member functions.
    // This ensures that the temperature can only be modified using the setTemperature() function, which enforces
    // valid temperature values between 0 and 100.
};

int main()
{
    // Create an object (instance) of the Stove class called "stove"
    Stove stove;

    // The default constructor is automatically called when the "stove" object is created.
    // This ensures that the stove's temperature is initialized to 0.

    // Set the temperature of the stove to 45 using the setTemperature() function
    stove.setTemperature(45);
    // This call to setTemperature(45) will attempt to set the stove's temperature to 45.

    // Print the current temperature of the stove using std::cout and the getTemperature() function
    // The getTemperature() function is used to retrieve the current temperature value of the stove.
    // Here, it returns the value 45, which was set previously using setTemperature().
    std::cout << "The temperature of the stove is: " << stove.getTemperature() << std::endl;

    // The program execution completes successfully, so return 0 to indicate success
    return 0;
}