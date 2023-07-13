#include <iostream>

using text_t = std::string;
using number_t = int;
using std::cin;
using std::cout;

number_t main()
{
    text_t name;
    number_t number;
    cout << "Enter you name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> number;

    cout << "Hello " << name << " as per your input you are " << number << " years old.";

    return 0;
}
