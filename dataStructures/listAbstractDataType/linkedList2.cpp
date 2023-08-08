#include <iostream>

class Node
{
public:
    int dataValue;
    Node *next;

    // Constructor
    Node(int data) : dataValue(data), next(nullptr) {}
};

class linkedList
{
private:
    // A pointer to the first node in the linked list
    Node *head;

public:
    // Constructor
    linkedList() : head(nullptr) {}

    // Insert node at the end of the list
    void insertNode(int dataPoint)
    {
        Node *newNode = new Node(dataPoint);
        // Check if the linked list is empty
        if (head == nullptr)
        {
            // List is empty make the dataPoint the first item in the list

            // Set Value
            newNode->dataValue = dataPoint;

            // Set head pointer to point to newNode
            head = newNode;
        }
        else
        {
            // List is not empty to we need to add this element at the end of the list
            Node *ptr = head;

            // Traverse to the end of the list
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }

            // Now we are at the last node
            newNode->dataValue = dataPoint; // set its dataValue to dataPoint
            ptr->next = newNode;            // Make last item point to newNode
        }
    }

    void printList()
    {
        // Check if list is empty
        if (head == nullptr)
        {
            std::cout << "List is empty";
        }
        else
        {
            Node *ptr = head;
            while (ptr != nullptr)
            {
                std::cout << ptr->dataValue << " ";
                ptr = ptr->next;
            }
        }
    }
};

int main()
{
    std::system("cls");
    linkedList l1;
    l1.insertNode(10);
    l1.insertNode(20);
    l1.insertNode(10);
    l1.insertNode(20);
    l1.insertNode(10);
    l1.insertNode(20);

    l1.printList();
}