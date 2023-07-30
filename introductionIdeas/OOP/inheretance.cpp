/*
In this inheritance example, we have a base class Animal, which represents a generic animal. The Animal class has a public member variable alive that indicates if the animal is alive
and a public member function eat() to simulate the eating behavior of an animal.

We then have two derived classes, Dog and Cat, which inherit from the Animal class. These classes represent specific types of animals, each having its unique behavior.
The Dog class has a public member function bark() to simulate the barking behavior of a dog, while the Cat class has a public member function meow() to simulate the meowing behavior of a cat.

In the main() function, we create objects of the Dog and Cat classes, named tommy and phiphi, respectively. We demonstrate how these objects can access and use the inherited functionalities
from the Animal class. Both Dog and Cat objects can call the eat() function from the Animal class because they inherit it. Additionally, each derived class has its unique behavior,
such as bark() for Dog and meow() for Cat.
*/

#include <iostream>

// Base class: Animal
class Animal
{
public:
    bool alive = true; // Public member variable to indicate if the animal is alive

    // Public member function: eat()
    void eat()
    {
        std::cout << "This animal is eating" << std::endl;
    }
};

// Derived class: Dog (inherits from Animal)
class Dog : public Animal
{
public:
    // Public member function: bark()
    void bark()
    {
        std::cout << "Woof woof woof" << std::endl;
    }
};

// Derived class: Cat (inherits from Animal)
class Cat : public Animal
{
public:
    // Public member function: meow()
    void meow()
    {
        std::cout << "meow meow meow" << std::endl;
    }
};

int main()
{
    Dog tommy; // Create an object of the Dog class called "tommy"

    // Accessing the public member variable "alive" of the base class Animal through the derived class Dog
    std::cout << tommy.alive << std::endl; // Output: 1 (Since "alive" is true)

    // Calling the public member function "eat()" of the base class Animal through the derived class Dog
    tommy.eat(); // Output: "This animal is eating"

    // Calling the public member function "bark()" of the derived class Dog
    tommy.bark(); // Output: "Woof woof woof"

    Cat phiphi; // Create an object of the Cat class called "phiphi"

    // Calling the public member function "eat()" of the base class Animal through the derived class Cat
    phiphi.eat(); // Output: "This animal is eating"

    // Calling the public member function "meow()" of the derived class Cat
    phiphi.meow(); // Output: "meow meow meow"

    return 0;
}