#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled;
};

int main()
{
    student student1;
    student1.name = "Faraz";
    student1.gpa = 3.42;
    student1.enrolled = false;

    std::cout << student1.name << std::endl;
    std::cout << student1.gpa << std::endl;
    std::cout << student1.enrolled << std::endl;

    student student2;
    student2.name = "Slueman";
    student2.gpa = 3.22;
    student2.enrolled = true;

    std::cout << student2.name << std::endl;
    std::cout << student2.gpa << std::endl;
    std::cout << student2.enrolled << std::endl;

    student student3;
    student3.name = "Umer";
    student3.gpa = 2.11;
    student3.enrolled = true;

    std::cout << student3.name << std::endl;
    std::cout << student3.gpa << std::endl;
    std::cout << student3.enrolled << std::endl;

    return 0;
}