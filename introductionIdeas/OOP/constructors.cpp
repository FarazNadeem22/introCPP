/*
In this code, a class Student is defined to represent a student with three attributes: name, age, and gpa. The class has a constructor that is used to initialize the object properties when a new student object is created.

In the main() function, three objects of the Student class, student1, student2, and student3, are created. Each object represents a different student with unique properties (name, age, and GPA). The constructor is used to set the properties of each student object based on the provided arguments.

After creating the objects and setting their properties, the code prints the details of each student (name, age, and GPA) using std::cout. It demonstrates how the properties of each student object are accessible through the public member variables.

Overall, this code demonstrates the use of a simple Student class with a constructor to create and manipulate objects representing different students and access their properties, such as name, age, and GPA.*/

#include <iostream>

// Define a class called "Student"
class Student
{
public:
    std::string name; // Public member variable to store the student's name
    int age;          // Public member variable to store the student's age
    double gpa;       // Public member variable to store the student's GPA

    // Constructor for the Student class, used to initialize object properties
    Student(std::string name, int age, double gpa)
    {
        // Set the object's name, age, and GPA based on the provided arguments
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main()
{
    // Create three objects (instances) of the Student class: student1, student2, and student3
    // Each object represents a different student with unique properties
    Student student1("Tammy", 25, 3.4);
    Student student2("John", 40, 3.5);
    Student student3("Ted", 50, 3.8);

    // Print the properties of student1 using std::cout
    std::cout << student1.name << std::endl; // Print the name of student1 ("Tammy")
    std::cout << student1.age << std::endl;  // Print the age of student1 (25)
    std::cout << student1.gpa << std::endl;  // Print the GPA of student1 (3.4)

    // Print the properties of student2 using std::cout
    std::cout << student2.name << std::endl; // Print the name of student2 ("John")
    std::cout << student2.age << std::endl;  // Print the age of student2 (40)
    std::cout << student2.gpa << std::endl;  // Print the GPA of student2 (3.5)

    // Print the properties of student3 using std::cout
    std::cout << student3.name << std::endl; // Print the name of student3 ("Ted")
    std::cout << student3.age << std::endl;  // Print the age of student3 (50)
    std::cout << student3.gpa;               // Print the GPA of student3 (3.8)

    // The program execution completes successfully, so return 0 to indicate success
    return 0;
}