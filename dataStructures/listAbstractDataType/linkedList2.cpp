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
        std::cout << std::endl;
    }

    void deleteNodeOld(int dataPoint)
    {
        try
        {
            // Check if the head node is the one to delete
            if (head->dataValue == dataPoint)
            {
                head = head->next;
                return;
            }

            Node *ptr = head;
            // Find the node before the target Node
            while (ptr->next->dataValue != dataPoint)
            {
                ptr = ptr->next;
            }
            // Now the pointer is at the node before the target node
            ptr->next = ptr->next->next;
            return;
        }
        catch (...)
        {
            std::cout << "Node not found in the list.";
        }
    }

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

            // Check if the head pointer is the one to delete
            if (head->dataValue == dataPoint)
            {
                head = head->next;
                return;
            }

            // Find the Node to delete
            Node *ptr = head;

            while (ptr->next != nullptr && ptr->next->dataValue != dataPoint)
            {
                ptr = ptr->next;
            }

            // Check if the target node was found or not.
            if (ptr->next == nullptr)
            {
                std::cout << "Node {" << dataPoint << "} not found.\n";
                return;
            }

            // Now we know that we are at the node before the target node
            ptr->next = ptr->next->next;
        }
        catch (...)
        {
            std::cout << "An error has occurred.\n";
        }
    }
};

int main()
{
    std::system("cls");
    linkedList l1;
    l1.insertNode(10);
    l1.insertNode(20);
    l1.insertNode(60);
    l1.insertNode(30);
    l1.insertNode(90);
    l1.insertNode(70);

    l1.printList();

    l1.deleteNode(700);

    l1.printList();
}