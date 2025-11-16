#include "insertion_sort.h"

// Constructor implementation
Node::Node(int value) {
    data = value;
    next = nullptr;
}

// -----------------------------------------------------------
// Insert a node into the correct location inside sorted list
// -----------------------------------------------------------
void sortedInsert(Node*& sortedHead, Node* newNode) {

    // Case 1: Empty list OR insert at beginning
    if (sortedHead == nullptr || newNode->data <= sortedHead->data) {
        newNode->next = sortedHead;
        sortedHead = newNode;
        return;
    }

    // Case 2: Traverse and find correct position
    Node* current = sortedHead;

    // Move until current->next has a value greater than newNode->data
    while (current->next != nullptr && current->next->data < newNode->data) {
        current = current->next;
    }

    // Insert the node
    newNode->next = current->next;
    current->next = newNode;
}

// -----------------------------------------------------------
// Insertion Sort for Linked List
// -----------------------------------------------------------
void insertionSort(Node*& head) {

    Node* sorted = nullptr;     // New sorted list
    Node* current = head;       // Current node from original list

    while (current != nullptr) {
        Node* nextNode = current->next;  // Save next node
        current->next = nullptr;         // Detach current
        sortedInsert(sorted, current);   // Insert into sorted list
        current = nextNode;              // Move forward
    }

    head = sorted;  // Update original head pointer
}

// -----------------------------------------------------------
// Append a new node to the end of the list
// -----------------------------------------------------------
void appendNode(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
}

// -----------------------------------------------------------
// Print the linked list
// -----------------------------------------------------------
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}
