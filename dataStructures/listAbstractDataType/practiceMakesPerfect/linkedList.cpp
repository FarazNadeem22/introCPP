#include <iostream>

class Node
{
public:
    std::string data;
    Node *next;

    // Constructor
    Node(std::string data) : data(data), next(nullptr) {}
};

class linkedList
{
private:
    // A pointer to the first node in the linked list
    Node *head;

public:
    // Constructor
    linkedList() : head(nullptr) {}

    void prettyPrint()
    {
        // Check to see if the list is empty
        if (head == nullptr)
        {
            // list is empty print msg
            std::cout << "The list is empty.\n";
        }
        else
        {
            // The list is not empty, traverse through the list and print the value of each node
            Node *ptr = head;
            while (ptr != nullptr)
            {
                // While the pointer is not null print the element of the node that the ptr is pointing to
                std::cout << ptr->data;

                // Make sure that the pointer is no the last pointer if not print an arrow for decoration
                if (ptr->next != nullptr)
                {
                    std::cout << "->";
                }

                // Move pointer forward one node
                ptr = ptr->next;
            }

            // Done printing nodes then output a new line character to the screen
            std::cout << std::endl;
        }
    }

    void insert(std::string name)
    {
        // Create a new node and populate it with name
        Node *newNode = new Node(name);

        // Check if the list is empty
        if (head == nullptr)
        {
            // The list is empty make head equal to new node
            head = newNode;
        }
        else // The list is not empty
        {
            // Find the last node
            Node *ptr = head;

            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }

            // Now ptr is pointing to the last element in the list
            ptr->next = newNode;
        }
    }

    void pop()
    {
        // check if list is empty
        if (head == nullptr)
        {
            // Output msg to screen that the list is empty
            std::cout << "Empty list.\n";
        }
        else // remove the last node
        {
            // check if there is only one node in the list
            if (head->next == nullptr)
            {
                delete head;
                head = nullptr;
            }
            else
            {
                // Get to the second last node
                Node *ptr = head;
                while (ptr->next->next != nullptr)
                {
                    ptr = ptr->next;
                }

                // We are at the second last node make it point to NULL
                delete ptr->next; // Free memory occupied by the last node
                ptr->next = nullptr;
            }
        }
    }

    Node *findNode(std::string name)
    {
        // Function to find a node with a given name in the linked list.
        // Returns a pointer to the node if found, otherwise returns nullptr.

        // Start traversing the linked list from the head node.
        Node *ptr = head;

        // Traverse through the linked list until the end (ptr == nullptr) is reached.
        while (ptr != nullptr)
        {
            // Check if the current node's data matches the given name.
            if (ptr->data == name)
            {
                // If the node's data matches the given name, return the pointer to the node.
                return ptr;
            }

            // Move the pointer to the next node in the linked list.
            ptr = ptr->next;
        }

        // If the function reaches this point, it means the node with the given name was not found.
        // Return nullptr to indicate that the node was not found in the linked list.
        return nullptr;
    }

    void deleteAfter(std::string name)
    {
        // Find the node with the given name in the linked list.
        Node *ptr = findNode(name);

        // Check if the node with the given name exists and has a node following it.
        if (ptr != nullptr)
        {
            // If the node to be deleted is the last node (next node is nullptr),
            // then there is nothing to delete after the given node.
            if (ptr->next == nullptr)
            {
                std::cout << "This is the last node, there is nothing to delete after.\n";
            }
            else
            {
                // Save the pointer to the node to be deleted.
                Node *tmpPtr = ptr->next;

                // Update the link to skip the node to be deleted.
                ptr->next = tmpPtr->next;

                // Delete the node.
                delete tmpPtr;
            }
        }
        else
        {
            // The node with the given name does not exist or it's the last node, so there's nothing to delete.
            std::cout << "The node with the given name <<<" << name << ">>> does not exist.\n";
        }
    }
};

int main()
{
    linkedList list;
    list.prettyPrint();
    list.insert("Boston");
    list.insert("New York");
    list.insert("Los Angles");
    list.insert("Buffalo");
    list.insert("Fredonia");
    list.prettyPrint();
    // list.pop();
    list.prettyPrint();
    list.deleteAfter("New York");
    list.deleteAfter("Boston");
    list.deleteAfter("Dallas");
    list.deleteAfter("Fredonia");
    list.prettyPrint();
}