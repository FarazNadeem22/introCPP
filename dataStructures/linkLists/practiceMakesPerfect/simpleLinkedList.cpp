#include <iostream>
#include <vector>

// Node class to represent individual elements (nodes) in the linked list
class Node
{
public:
    int dataValue;
    Node *next;

    /*constructor

    This is a special syntax in C++ used to initialize class member variables when an object is created.
    Instead of using assignments inside the constructor body, the initializer list provides a concise and efficient way to
    initialize member variables directly when the constructor is called.

    The benefit of using the initializer list is that it allows you to set the initial values of member variables directly when
    the object is created, without requiring additional assignments inside the constructor body. This can lead to more efficient
    code since it avoids the overhead of assigning values in the constructor body and can be especially useful for classes with
    complex member variables or when dealing with inheritance.

    Node(int data): This is the constructor declaration that takes an integer data as its parameter. It is the function that will
    be called when you create an object of the Node class.

    :: The colon is used to start the initializer list.

    dataValue(data): This initializes the dataValue member variable with the value of the data parameter passed to the constructor.
    The member variable dataValue is assumed to be a member of the Node class.

    next(nullptr): This initializes the next member variable to a nullptr.
    It is used to initialize a pointer member to point to nothing (nullptr) by default.
    */
    Node(int data) : dataValue(data), next(nullptr) {}
};

class linkedList
{
private:
    // A pointer to the first node in the linked list
    Node *head;

public:
    // constructor to initialize an empty linked list
    linkedList() : head(nullptr)
    {
    }

    // Function to insert a new element at the end of the linked list
    void insert(int data)
    {
        // Create a new node with the data passed to the function
        Node *newNode = new Node(data);

        // Check if the list is empty;
        if (head == nullptr)
        {
            // Make head pointer point to this new node
            head = newNode;
        }
        else // List is not empty
        {
            // Find the last node
            Node *ptr = head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            // Now ptr is pointing to the last node not set ptr->next to newNode
            ptr->next = newNode;
        }
    }

    void prettyPrint()
    {
        // Check if head pointer is null
        if (head == nullptr)
        {
            // If list is empty print empty list msg
            std::cout << "The List is empty.\n";
        }
        else
        {
            // List is not empty, traverse the linked list and print each item.
            Node *ptr = head;
            while (ptr != nullptr)
            {
                // Print the dataValue to the screen
                std::cout << ptr->dataValue;

                // Check to see if the next node is the last if not then print a arrow for decoration
                if (ptr->next != nullptr)
                {
                    std::cout << "->";
                }

                // Move the pointer forward
                ptr = ptr->next;
            }
            // Done printing the elements print out a empty line
            std::cout << std::endl;
        }
    }
};

int main()
{
    linkedList list;

    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.prettyPrint();
}