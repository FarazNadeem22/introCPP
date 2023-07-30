/*
In this code, we have two derived classes Cube and Sphere that inherit from the base class Shape. The Cube class represents a cube and calculates
its area and volume based on the provided side length. The Sphere class represents a sphere and calculates its area and volume based on the provided radius.

The main function creates instances of Cube and Sphere, calculates their areas and volumes using their respective constructors, and then displays
the information on the screen.
*/

#include <iostream>
#include <cmath>

class Shape
{
public:
    double area;   // Common property to store the area of a shape
    double volume; // Common property to store the volume of a shape
};

class Cube : public Shape
{
public:
    double side; // Specific property for a cube, its side length

    // Constructor for Cube
    Cube(double side)
    {
        this->side = side;                  // Assign the given side length to the cube
        this->area = std::pow(side, 2) * 6; // Calculate the area of the cube (side^2 * 6, as it has 6 faces)
        this->volume = std::pow(side, 3);   // Calculate the volume of the cube (side^3)
    }
};

class Sphere : public Shape
{
public:
    double radius; // Specific property for a sphere, its radius

    // Constructor for Sphere
    Sphere(double radius)
    {
        this->radius = radius;                                   // Assign the given radius to the sphere
        this->area = 4 * M_PI * std::pow(radius, 2);             // Calculate the surface area of the sphere (4 * π * r^2)
        this->volume = (4.0 / 3.0) * M_PI * std::pow(radius, 3); // Calculate the volume of the sphere (4/3 * π * r^3)
    }
};

int main()
{
    // Create a Cube object with side length 10
    Cube cube(10);

    // Create a Sphere object with radius 20
    Sphere sphere(20);

    // Clear the screen
    system("cls");

    // Display information about the Cube
    std::cout << "CUBE WITH SIDE: " << cube.side << std::endl;
    std::cout << "******************************" << std::endl;
    std::cout << "Area: " << cube.area << std::endl;     // Display the area of the cube
    std::cout << "Volume: " << cube.volume << std::endl; // Display the volume of the cube
    std::cout << "******************************" << std::endl;
    std::cout << std::endl
              << std::endl;

    // Display information about the Sphere
    std::cout << "SPHERE WITH RADIUS: " << sphere.radius << std::endl;
    std::cout << "******************************" << std::endl;
    std::cout << "Area: " << sphere.area << std::endl;     // Display the surface area of the sphere
    std::cout << "Volume: " << sphere.volume << std::endl; // Display the volume of the sphere
    std::cout << "******************************" << std::endl;

    return 0;
}