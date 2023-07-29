# inheritance in C++

In C++, inheritance is a fundamental object-oriented programming (OOP) concept that allows a class (called the derived class or subclass) to inherit properties and behaviors from another class (called the base class or superclass). Inheritance forms an "is-a" relationship, where the derived class is a specialized version of the base class.

Key concepts of inheritance in C++:



- Base Class (Superclass):
---------------------------
The class that provides its properties and behaviors to be inherited by other classes is known as the base class or superclass.
It serves as a blueprint for the derived classes and contains common characteristics shared by multiple subclasses.



- Derived Class (Subclass):
-----------------------------
The class that inherits properties and behaviors from a base class is called the derived class or subclass.
It can add new members and behaviors or override the existing ones inherited from the base class.



- Access Control:
-----------------
In C++, the access control of the base class members is preserved in the derived class.
Public members of the base class are accessible in the derived class.
Protected members of the base class are accessible in the derived class but not outside the class.
Private members of the base class are not directly accessible in the derived class.



- Inheritance Types:
--------------------
Single Inheritance: A derived class inherits from a single base class.
Multiple Inheritance: A derived class inherits from two or more base classes.
Multilevel Inheritance: A derived class inherits from another derived class, forming a chain.
Hierarchical Inheritance: Multiple derived classes inherit from a single base class.
Hybrid Inheritance: A combination of multiple and multilevel inheritance.



- Syntax:
----------
To derive a class from a base class, we use the colon (:) followed by the access specifier and the name of the base class.
Example: class Derived : access-specifier Base.
Function Overriding:

Derived classes can override (redefine) the base class functions if they need different behavior.
Function overriding enables polymorphism, allowing different classes to respond to the same function call in unique ways.



- Constructors and Destructors:
-------------------------------
Derived classes automatically call the constructors of their base classes before executing their own constructors.
The destructors of derived classes also automatically call the destructors of their base classes.
Inheritance is a powerful feature that promotes code reusability, extensibility, and modularity in C++. It allows developers to create a hierarchy of related classes, where each class can build upon the features of its parent classes, creating a well-organized and structured codebase. However, it is essential to design inheritance hierarchies carefully to maintain proper encapsulation and avoid potential issues like the diamond problem in multiple inheritance.