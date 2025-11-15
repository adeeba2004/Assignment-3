// Queue.cpp
// Template Queue implementation (function definitions)

#ifndef QUEUE_CPP
#define QUEUE_CPP

#include "Queue.h"

template <class T>
Queue<T>::Queue(int size) {
    arr = new T[size];
    capacity = size;
    frontIdx = 0;
    rearIdx = -1;
    count = 0;
}

template <class T>
Queue<T>::~Queue() {
    delete[] arr;
}

template <class T>
void Queue<T>::push(T item) {
    if (count == capacity) {
        cout << "Queue is full!\n";
        return;
    }
    rearIdx = (rearIdx + 1) % capacity;
    arr[rearIdx] = item;
    count++;
}

template <class T>
void Queue<T>::pop() {
    if (empty()) {
        cout << "Queue is empty!\n";
        return;
    }
    frontIdx = (frontIdx + 1) % capacity;
    count--;
}

template <class T>
T Queue<T>::front() const {
    if (empty()) {
        cout << "Queue is empty!\n";
        exit(1);
    }
    return arr[frontIdx];
}

template <class T>
bool Queue<T>::empty() const {
    return (count == 0);
}

template <class T>
int Queue<T>::size() const {
    return count;
}

// -------------------------------------------------
// (c) move_to_rear(): move front element to the rear
// Uses only push(), front(), and pop()
// -------------------------------------------------
template <class T>
void Queue<T>::move_to_rear() {
    if (empty()) return;

    T temp = front();  // get front element
    pop();             // remove it from front
    push(temp);        // push same element at rear
}

#endif
