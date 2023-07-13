#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int correct;
    int total = 100;

    cout << "How many question did you get correct? ";
    cin >> correct;

    cout << "Your percent score is " << correct / float(total) * 100 << "%";
    return 0;
}