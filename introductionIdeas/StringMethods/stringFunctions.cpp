#include <iostream>
#include <cctype>

// www.cplusplus.com.reference/string/string

using std::cin;
using std::cout;
using std::getline;
using std::string;
using std::ws;

int main()
{
    string name;
    bool condition = true;
    char choice;
    int nameLength;

    cout << "Enter your name: ";
    getline(cin >> ws, name);

    nameLength = name.length();

    while (condition)
    {
        cout << "Would you like to append @gmail.com to your name? Y/n: ";
        cin >> choice;
        choice = toupper(choice);
        if (choice == 'Y' || choice == 'N')
        {
            condition = false;
            break;
        }
    }

    if (choice == 'Y')
    {
        name.append("@gmail.com");
    }
    if (nameLength > 12)
    {
        cout << "Your name cant be over 12 chars.";
    }
    else if (name.empty())
    {
        cout << "You did not enter your name.";
    }
    else
    {

        cout << "Welcome " << name;
    }

    // name.clear()

    /*
        Insert something in a string at given postiotion
        name.insert(index to start, what to add)
        name.insert(0, "@")
    */

    /*
         Find something in the string
         name.fine(' ')  //find a blank space and return the position
    */

    /*
        Erase a postion of your string between given index
        name.erase(starting index not inclusive, ending index not inclusive)
        name.erase(2, 5);
    */

    return 0;
}