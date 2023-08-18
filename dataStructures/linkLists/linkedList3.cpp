#include <iostream>
#include <vector>

class Node
{
    int dataValue;
    Node *next;

    // Simple constructor
    Node(int data) : dataValue(data), next(nullptr) {}

    // Constructor for vector
    Node(std::vector<int> dataVector) : next(nullptr)
    {
        // Initialize current to null pointer;
        Node *current = nullptr;

        // Create Nodes for the remaining elements
        for (size_t i = 0; i < dataVector.size(); i++)
        {
            if (current == nullptr)
            {
                // Create the first Node
                current = new Node(dataVector[i]);

                // Set 'next' of the current node to the first node
                next = current;
            }
            else
            {
                // Create and connect subsequent nodes
                current->next = new Node(dataVector[i]);
                current = current->next;
            }
        }
    }
};

class Node
{
public:
    int dataValue; // Data stored in the node
    Node *next;    // Pointer to the next node in the list

    // Constructor to initialize data and next pointer
    Node(int data) : dataValue(data), next(nullptr) {}

    /**
     * Constructor that takes a vector of integers to create a linked list.
     *
     * param dataVector The vector containing integer values to populate the linked list.
     */
    Node(std::vector<int> dataVector) : next(nullptr)
    {
        // Initialize 'current' pointer to nullptr
        Node *current = nullptr;

        // Loop through the elements in the vector to create nodes
        for (size_t i = 0; i < dataVector.size(); i++)
        {
            if (current == nullptr)
            {
                // Create the first Node
                current = new Node(dataVector[i]);

                // Set 'next' of the current node to the first node
                next = current;
            }
            else
            {
                // Create and connect subsequent nodes
                current->next = new Node(dataVector[i]);

                // Move 'current' pointer to the newly created node
                current = current->next;
            }
        }
    }
};