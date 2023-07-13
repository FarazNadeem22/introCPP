#include <iostream>

using namespace std;

int main()
{
    /* The const keyword specifies that a variable's value is constant
        tell the complier to prevent anything from modifying it as it in now read only*/
    // Lets calculate the circumference of a circle

    // Declare variables constants are usually declared as capital by convention
    const double PI = 3.141;
    float radius;

    // Get input for radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    //  calculate C=2πr
    double circumference = 2 * PI * radius;

    cout << "\nThe circumference of the circle is: " << circumference;
    return 0;
}