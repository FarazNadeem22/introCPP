#include <iostream>

using namespace std;

int main()
{
    int age = 21;
    int year = 2023;
    double price = 24.99;
    float temp = 30.4;
    float gpa = 3.4;
    char grade;
    bool passed;
    string student = "Student t";

    cout << "Enter GPA: ";
    cin >> gpa;

    if (gpa <= 2)
    {
        grade = 'F';
        passed = false;
    }
    else
    {
        grade = 'P';
        passed = true;
    }

    cout << "\nGrade: " << grade;

    if (passed)
    {
        cout << '\n'
             << student << " passed.";
    }
    else
    {
        cout << '\n'
             << student << " did not pass.";
    }

    return 0;
}