// Queue.h
// Template Queue implementation using circular array
// Function declarations only

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

template <class T>
class Queue {
private:
    T* arr;        // dynamic array to store queue items
    int capacity;  // maximum capacity
    int frontIdx;  // index of front element
    int rearIdx;   // index of last element
    int count;     // current size

public:
    Queue(int size = 100);      // constructor
    ~Queue();                   // destructor

    void push(T item);          // insert element at rear
    void pop();                 // remove element at front
    T front() const;            // return front element
    bool empty() const;         // check if queue is empty
    int size() const;           // return size

    // Part (c)
    void move_to_rear();        // move front element to rear
};

#include "Queue.cpp"
#endif
