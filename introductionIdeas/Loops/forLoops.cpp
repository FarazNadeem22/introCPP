#include <iostream>

using std::cin, std::cout, std::getline, std::ws, std::isdigit, std::stoi, std::string;

int main()
{
    string input;
    int target;
    bool isDigit;

    do
    {

        // Get input
        cout << "How many times would you like to loop? ";
        cin >> input;

        // check if input is an integer
        isDigit = true;
        for (char c : input)
        {
            if (!isdigit(c))
            {
                isDigit = false;
                // input.clear();
                cout << "Input is no an integer. Try again\n";
                break;
            }
        }
    } while (!isDigit);

    target = stoi(input);

    for (int i = 0; i <= target; i += 2)
    {
        cout << "i = " << i << '\n';
    }
    return 0;
}