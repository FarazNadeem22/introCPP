#include <iostream>
#include <vector>

// Node class to represent individual elements (nodes) in the linked list
class Node
{
public:
    int dataValue;
    Node *next;

    // Constructor to initialize the node with data and set the next pointer to nullptr
    Node(int data) : dataValue(data), next(nullptr) {}
};

// Linked list class to manage the nodes and operations on the list
class LinkedList
{
private:
    Node *head; // Pointer to the first node (head) of the linked list

public:
    // Constructor to initialize an empty linked list
    LinkedList() : head(nullptr) {}

    // Function to insert a new element at the beginning of the linked list
    void insert_begin(int data)
    {
        Node *new_node = new Node(data);
        new_node->next = head;
        head = new_node;
    }

    // Function to insert a new element at the end of the linked list
    void insert_end(int data)
    {
        Node *new_node = new Node(data);
        if (head == nullptr)
        {
            // If the list is empty, set the new node as the head
            head = new_node;
        }
        else
        {
            // Find the last node and append the new node to its next pointer
            Node *ptr = head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
        }
    }

    // Function to convert a list to a linked list and insert the elements either at the beginning or end
    void insert_list(const std::vector<int> &lst, bool reverse = false)
    {
        if (reverse)
        {
            // Insert elements in reverse order (end of the linked list)
            for (auto it = lst.rbegin(); it != lst.rend(); ++it)
            {
                insert_end(*it);
            }
        }
        else
        {
            // Insert elements in the order of the list (beginning of the linked list)
            for (const auto &element : lst)
            {
                insert_begin(element);
            }
        }
    }

    // Function to insert a new element after a specific node with the given dataValueue
    void insert_after_node(int data, int dataValueue)
    {
        try
        {
            Node *new_node = new Node(data);
            Node *ptr = head;
            while (ptr->dataValue != dataValueue)
            {
                ptr = ptr->next;
            }
            new_node->next = ptr->next;
            ptr->next = new_node;
        }
        catch (...)
        {
            // Handle the case when the target node with the given dataValueue is not found
            std::cout << dataValueue << " not found in the linked list" << std::endl;
        }
    }

    // Function to insert a new element before a specific node with the given dataValueue
    void insert_before_node(int data, int dataValueue)
    {
        try
        {
            Node *new_node = new Node(data);
            if (head->dataValue == dataValueue)
            {
                // If the target node is the head, insert the new node before the head
                new_node->next = head;
                head = new_node;
                return;
            }
            Node *ptr = head;
            while (ptr->next->dataValue != dataValueue)
            {
                ptr = ptr->next;
            }
            new_node->next = ptr->next;
            ptr->next = new_node;
        }
        catch (...)
        {
            // Handle the case when the target node with the given dataValueue is not found
            std::cout << dataValueue << " not found in the linked list" << std::endl;
        }
    }

    // Function to print the elements of the linked list
    void printLinkedList()
    {
        // Check if the linked list is empty
        if (head == nullptr)
        {
            // If empty, print a message
            std::cout << "Linked List is Empty" << std::endl;
        }
        else
        {
            // If not empty, traverse the linked list and print each element
            Node *ptr = head;
            while (ptr != nullptr)
            {
                std::cout << ptr->dataValue << " ";
                ptr = ptr->next;
            }
            std::cout << std::endl;
        }
    }

    // Function to delete a node with the given dataValueue from the linked list
    void delete_node(int dataValueue)
    {
        try
        {
            // Check if the target node is the head node
            if (head->dataValue == dataValueue)
            {
                Node *temp = head;
                head = head->next;
                delete temp;
                return;
            }
            // Find the node before the target node
            Node *ptr = head;
            while (ptr->next->dataValue != dataValueue)
            {
                ptr = ptr->next;
            }
            Node *temp = ptr->next;
            ptr->next = ptr->next->next;
            delete temp;
        }
        catch (...)
        {
            // Handle the case when the target node with the given dataValueue is not found
            std::cout << dataValueue << " not found in the list" << std::endl;
        }
    }

    // Function to clear the linked list and free memory
    void clear()
    {
        Node *ptr = head;
        while (ptr != nullptr)
        {
            Node *temp = ptr;
            ptr = ptr->next;
            delete temp;
        }
        head = nullptr;
    }
};

int main()
{
    LinkedList list;

    // Adding elements to the linked list
    list.insert_end(10);
    list.insert_end(20);
    list.insert_end(30);
    list.insert_end(40);

    // Displaying the linked list
    std::cout << "Linked List: ";
    list.printLinkedList();

    // Clearing the linked list and freeing memory
    list.clear();

    return 0;
}