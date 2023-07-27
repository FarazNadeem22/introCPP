#include <iostream>

// Define a struct named "student" to represent student information.
struct student
{
    std::string name; // Student's name.
    double gpa;       // Student's grade point average.
    bool enrolled;    // Indicates whether the student is currently enrolled (true) or not (false).
};

int main()
{
    // Declare a student object named "student1".
    student student1;

    // Set properties for "student1".
    student1.name = "Faraz";
    student1.gpa = 3.42;
    student1.enrolled = false;

    // Print student1's information.
    std::cout << "Student 1:" << std::endl;
    std::cout << "Name: " << student1.name << std::endl;
    std::cout << "GPA: " << student1.gpa << std::endl;
    std::cout << "Enrolled: " << student1.enrolled << std::endl;

    // Declare another student object named "student2".
    student student2;

    // Set properties for "student2".
    student2.name = "Slueman";
    student2.gpa = 3.22;
    student2.enrolled = true;

    // Print student2's information.
    std::cout << "\nStudent 2:" << std::endl;
    std::cout << "Name: " << student2.name << std::endl;
    std::cout << "GPA: " << student2.gpa << std::endl;
    std::cout << "Enrolled: " << student2.enrolled << std::endl;

    // Declare another student object named "student3".
    student student3;

    // Set properties for "student3".
    student3.name = "Umer";
    student3.gpa = 2.11;
    student3.enrolled = true;

    // Print student3's information.
    std::cout << "\nStudent 3:" << std::endl;
    std::cout << "Name: " << student3.name << std::endl;
    std::cout << "GPA: " << student3.gpa << std::endl;
    std::cout << "Enrolled: " << student3.enrolled << std::endl;

    return 0;
}