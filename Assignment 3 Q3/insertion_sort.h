#pragma once
#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <iostream>

// ------------------------------
// Node structure for linked list
// ------------------------------
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int value);
};

// ---------------------------------------------
// Function Declarations (Implemented in .cpp)
// ---------------------------------------------

// Inserts a new node into the correct sorted position
void sortedInsert(Node*& sortedHead, Node* newNode);

// Performs insertion sort on a linked list
void insertionSort(Node*& head);

// Adds a new node at the end of the linked list
void appendNode(Node*& head, int value);

// Prints the linked list
void printList(Node* head);

#endif
