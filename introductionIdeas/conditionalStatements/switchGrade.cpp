#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{
    char grade;

    cout << "Enter Grade: ";
    cin >> grade;

    grade = toupper(grade);

    switch (grade)
    {
    case 'A':
        cout << "Well Done.";
        break;
    case 'B':
        cout << "Good Job";
        break;
    case 'C':
        cout << "Fair";
        break;
    case 'D':
        cout << "Passed, but you need to try harder next time";
        break;
    case 'F':
        cout << "You failed.";
        break;
    default:
        cout << "Please enter a grade A, B, C, D or F only";
    }

    return 0;
}