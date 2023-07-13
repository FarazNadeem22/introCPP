#include <iostream>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{

    string name;
    int age;

    cout << "What is your full name? ";
    getline(cin >> std::ws, name); // the >> ws will strip the name of any white spaces. This is use for for the end line char \n

    cout << "Hello Mr. " << name << ". How old might you be? ";

    cin >> age;

    cout << "Hello Mr. " << name << ", you are " << age << " years old.";

    return 0;
}
