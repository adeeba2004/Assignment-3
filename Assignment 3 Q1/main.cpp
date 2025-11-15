//Adeeba Nizam



// main.cpp
// Demonstrates the Queue class functionality

#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue<int> q(20);

    // (a) Push 10 values into queue
    for (int i = 1; i <= 10; i++) {
        q.push(i * 10);
    }

    // (b) Display queue elements using queue functions only
    cout << "Queue elements: ";
    int n = q.size();

    for (int i = 0; i < n; i++) {
        int f = q.front();  // get front
        cout << f << " ";
        q.pop();            // remove it
        q.push(f);          // restore it back (keeps queue unchanged)
    }
    cout << endl;

    // (c) move_to_rear()
    cout << "Moving front to rear...\n";
    q.move_to_rear();

    // Display again
    cout << "Queue after moving front to rear: ";
    n = q.size();

    for (int i = 0; i < n; i++) {
        int f = q.front();
        cout << f << " ";
        q.pop();
        q.push(f);
    }
    cout << endl;

    return 0;
}
