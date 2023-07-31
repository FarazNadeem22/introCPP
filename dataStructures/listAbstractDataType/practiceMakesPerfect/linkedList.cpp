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
};

int main()
{
    linkedList list;
    list.prettyPrint();
    list.insert("Faraz");
    list.insert("Nadeem");
    list.insert("Siddiqi");
    list.prettyPrint();
    list.pop();
    list.prettyPrint();
}