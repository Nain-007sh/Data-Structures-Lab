#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* next;
};

// Head points to the first node
Node* head = NULL;


// Insert a new node at the front
void InsertAtFront(int value)
{
    // Create a new node
    Node* newNode = new Node;

    // Store value
    newNode->data = value;

    // New node points to current first node
    newNode->next = head;

    // Head now points to new node
    head = newNode;
}


// Remove the first node
void RemoveFromFront()
{
    // Check if list is empty
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }

    // Store the first node temporarily
    Node* temp = head;

    // Move head to the second node
    head = head->next;

    // Delete old first node
    delete temp;
}


// Display all nodes
void Display()
{
    Node* current = head;

    while (current != NULL)
    {
        cout << current->data << " → ";
        current = current->next;
    }

    cout << "NULL" << endl;
}


int main()
{
    InsertAtFront(30);
    InsertAtFront(20);
    InsertAtFront(10);

    cout << "Linked List: ";
    Display();

    RemoveFromFront();

    cout << "After removing front: ";
    Display();

    return 0;
}