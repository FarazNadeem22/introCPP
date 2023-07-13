#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{
    char op;
    double num1, num2, result;
    bool condition = true;

    cout << "********************Calculator*************************\n";

    cout << "Enter operator (+, -, *, /)";
    cin >> op;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default:
        cout << "Incorrect entry for operator. Correct options must be from within (+, -, *, /)\n";
        condition = false;
        break;
    }
    if (condition)
    {
        cout << num1 << op << num2 << " = " << result << '\n';
    }
    cout << "*******************************************************";
    return 0;
}
