#include <iostream>

using std::cin, std::cout, std::string, std::getline, std::ws;

void bakePizza()
{
    cout << "Your pizza is ready.\n";
}

void bakePizza(string topping)
{
    cout << "Here is your " << topping << " pizza.\n";
}

void bakePizza(string topping1, string topping2)
{
    cout << "Here is your " << topping1 << " and " << topping2 << " pizza.\n";
}

int main()
{
    bakePizza();
    bakePizza("mushroom");
    bakePizza("mushroom", "chicken");
    return 0;
}