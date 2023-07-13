#include <iostream>
#include <ctime>

using std::cin, std::cout, std::string;

int main()
{
    srand(time(NULL));

    int die = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;

    cout << die << ", " << die2;

    return 0;
}