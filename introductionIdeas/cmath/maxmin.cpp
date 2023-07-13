#include <iostream>
#include <cmath> // www.cplusplus.com/reference/cmath

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{
    float a, b;
    cin >> a;
    cin >> b;
    cout << "Max: " << std::max(a, b) << ", Sqr: " << pow(2, std::max(a, b));
    cout << "\nMin: " << std::min(a, b) << ", Sqr rt " << sqrt(std::min(a, b));
}
