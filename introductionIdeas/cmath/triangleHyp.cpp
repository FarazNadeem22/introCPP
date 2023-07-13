#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{
    // c = sqrt(a^2 + b^2)
    int a, b;
    double c;

    // Get sides
    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter side B: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Side C is: " << c;

    return 0;
}