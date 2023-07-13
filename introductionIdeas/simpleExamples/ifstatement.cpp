#include <iostream>

using namespace std;

int main()
{
    int age = 21;
    int year = 2023;
    double price = 24.99;
    float temp = 30.4;
    float gpa = 3.4;
    char grade = NULL;

    if (gpa <= 2)
    {
        grade = 'F';
    }
    else
    {
        grade = 'P';
    }

    cout << "\nGrade: " << grade;

    return 0;
}