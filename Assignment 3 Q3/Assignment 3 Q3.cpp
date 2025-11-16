#include "insertion_sort.h"

int main() {

    Node* head = nullptr;

    // Insert test values
    appendNode(head, 7);
    appendNode(head, 3);
    appendNode(head, 5);
    appendNode(head, 2);
    appendNode(head, 9);

    std::cout << "Original List: ";
    printList(head);

    insertionSort(head);

    std::cout << "Sorted List:   ";
    printList(head);

    return 0;
}
