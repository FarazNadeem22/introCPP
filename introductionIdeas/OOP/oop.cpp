#include <iostream>

class Human
{
public:
    std::string name;
    std::string occupation;
    int age;

    void eat()
    {
        std::cout << "This person is eating.\n";
    }

    void drink()
    {
        std::cout << "This person is drinking.\n";
    }

    void sleep()
    {
        std::cout << "This person is sleeping.\n";
    }
};

int main()
{
    Human human1, human2;

    human1.name = "Jack";
    human1.occupation = "Engineer";
    human1.age = 32;

    std::cout << human1.age << std::endl
              << human1.name << std::endl
              << human1.occupation;

    human1.eat();
    human1.drink();
    human1.sleep();

    human2.name = "Tom";
    human2.occupation = "Uber Driver";
    human2.age = 20;

    std::cout << human2.age << std::endl
              << human2.name << std::endl
              << human2.occupation;

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}