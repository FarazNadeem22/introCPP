#include <iostream>

// Define a class called "Human"
class Human
{
public:
    // Public member variables to store information about a person
    std::string name;
    std::string occupation;
    int age;

    // Public member functions to perform actions related to a person
    // The function below prints a message indicating that the person is eating.
    void eat()
    {
        std::cout << "This person is eating.\n";
    }

    // The function below prints a message indicating that the person is drinking.
    void drink()
    {
        std::cout << "This person is drinking.\n";
    }

    // The function below prints a message indicating that the person is sleeping.
    void sleep()
    {
        std::cout << "This person is sleeping.\n";
    }
};

int main()
{
    // Create two instances (objects) of the Human class
    Human human1, human2;

    // Set properties for the first person (human1)
    human1.name = "Jack";
    human1.occupation = "Engineer";
    human1.age = 32;

    // Print the properties of the first person (human1)
    std::cout << human1.age << std::endl  // Print age
              << human1.name << std::endl // Print name
              << human1.occupation;       // Print occupation

    // Call the functions of the first person (human1) to perform actions
    human1.eat();   // Call the eat() function to indicate that human1 is eating
    human1.drink(); // Call the drink() function to indicate that human1 is drinking
    human1.sleep(); // Call the sleep() function to indicate that human1 is sleeping

    // Set properties for the second person (human2)
    human2.name = "Tom";
    human2.occupation = "Uber Driver";
    human2.age = 20;

    // Print the properties of the second person (human2)
    std::cout << human2.age << std::endl  // Print age
              << human2.name << std::endl // Print name
              << human2.occupation;       // Print occupation

    // Call the functions of the second person (human2) to perform actions
    human2.eat();   // Call the eat() function to indicate that human2 is eating
    human2.drink(); // Call the drink() function to indicate that human2 is drinking
    human2.sleep(); // Call the sleep() function to indicate that human2 is sleeping

    return 0;
}