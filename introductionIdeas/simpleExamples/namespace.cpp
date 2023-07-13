#include <iostream>

namespace mySpace
{
    int x = 1;
    int y = 1;

} // namespace mySpace

namespace secondSpace
{
    int x = 2;
    int y = 2;
} // namespace secondSpace

int main()
{
    using mySpace::x;
    using secondSpace::y;
    using std::cin;
    using std::cout;
    using std::string;

    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Hello " << name << ", welcome to this program. You are no." << x << "," << y;
    return 0;
}