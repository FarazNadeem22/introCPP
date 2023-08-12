#include <iostream>
#include <vector>
#include <cstdlib>

// Node class represents individual nodes in the linked list
class Node
{
public:
    int dataValue; // Data stored in the node
    Node *next;    // Pointer to the next node in the list

    // Constructor to initialize data and next pointer
    Node(int data) : dataValue(data), next(nullptr) {}

    // Constructor that takes a Vector as an argument
    Node(std::vector<int> dataVector) : next(nullptr)
    {
        // Check if vector is not empty
        if (!dataVector.empty())
        {
            // Assign the first value to the dataValue of this node
            dataValue = dataVector[0];

            Node *current = this;

            // Create nodes for the remaining elements
            for (size_t i = 0; i < dataVector.size(); i++)
            {
                /*
                The current pointer is used to keep track of the current node that you are working
                with as you iterate through the dataVector to create new nodes and connect them in
                the linked list.

                current is not a keyword like this. current is just an identifier (variable name) that
                you've chosen to represent a pointer that keeps track of the current node during the loop.
                It's a common practice to use such descriptive variable names to make your code more readable
                and understandable.
                */
                current->next = new Node(dataVector[i]);
                current = current->next;
            }
        }
    }
};

// LinkedList class represents the linked list data structure
class linkedList
{
private:
    Node *head; // Pointer to the first node in the list

public:
    // Constructor to initialize an empty linked list
    linkedList() : head(nullptr) {}

    linkedList(std::initializer_list<int> dataList) : head(nullptr)
    {
        for (int data : dataList)
        {
            insertNode(data);
        }
    }

    // Function to insert a new node at the end of the list
    void insertNode(int dataPoint)
    {
        // Create a new node with the given data value
        Node *newNode = new Node(dataPoint);

        // If the list is empty, make the new node the head
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            // Traverse to the end of the list to find the last node
            Node *ptr = head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }

            // Add the new node after the last node
            ptr->next = newNode;
        }
    }

    // Function to print the elements of the linked list
    void printList()
    {
        if (head == nullptr)
        {
            std::cout << "List is empty";
        }
        else
        {
            // Traverse through the list and print each node's value
            Node *ptr = head;
            while (ptr != nullptr)
            {
                std::cout << ptr->dataValue << " ";
                ptr = ptr->next;
            }
        }
        std::cout << std::endl;
    }

    // Function to delete a node with a specific data value
    void deleteNode(int dataPoint)
    {
        try
        {
            // Check if the list is empty
            if (head == nullptr)
            {
                std::cout << "The List is empty" << std::endl;
                return;
            }

            // Check if the head node is the one to delete
            if (head->dataValue == dataPoint)
            {
                // Delete the head node and update head pointer
                head = head->next;
                return;
            }

            // Find the node before the target node
            Node *ptr = head;
            while (ptr->next != nullptr && ptr->next->dataValue != dataPoint)
            {
                ptr = ptr->next;
            }

            // Check if the target node was found or not
            if (ptr->next == nullptr)
            {
                std::cout << "Node {" << dataPoint << "} not found.\n";
                return;
            }

            // Delete the target node by updating pointers
            ptr->next = ptr->next->next;
        }
        catch (...)
        {
            // Handle any errors that might occur during deletion
            std::cout << "An error has occurred.\n";
        }
    }

    // Function to delete the node that comes after a specific data value
    void deleteAfter(int dataPoint)
    {
        // Check if the list is empty
        if (head == nullptr)
        {
            std::cout << "The list is empty";
            return;
        }

        // Check if there's only one node in the list
        if (head->next == nullptr)
        {
            std::cout << "There is only one node in the list. Try using another function.\n";
            return;
        }

        // Find the node with the specified data value
        Node *ptr = head;
        while (ptr->next != nullptr && ptr->dataValue != dataPoint)
        {
            ptr = ptr->next;
        }

        // Check if the node with the specified data value exists
        if (ptr->next != nullptr)
        {
            // Delete the node after the target node by updating pointers
            ptr->next = ptr->next->next;
        }
    }
};

// Main function
int main()
{
    // Clear the console screen
    std::system("cls");

    // Create an instance of the linkedList class
    linkedList l1;

    // Insert nodes into the linked list
    l1.insertNode(10);
    l1.insertNode(20);
    l1.insertNode(60);
    l1.insertNode(30);
    l1.insertNode(90);
    l1.insertNode(70);

    // Print the initial list
    std::cout << "Initial list: ";
    l1.printList();

    // Delete node with value 30
    l1.deleteNode(30);
    std::cout << "List after deleting node 30: ";
    l1.printList();

    // Delete node after value 20
    l1.deleteAfter(20);
    std::cout << "List after deleting node after 20: ";
    l1.printList();

    linkedList l2({12, 22, 33, 14, 45, 50, 30, 34, 48, 38});
    l2.printList();

    l2.deleteNode(45);
    l2.printList();

    l2.deleteAfter(50);
    l2.printList();

    return 0;
}