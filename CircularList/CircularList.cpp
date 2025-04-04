#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList<int> intList;
    intList.insertAtStart(10);
    intList.insertAtEnd(20);
    intList.insertAt(15, 1);  // Insert 15 at index 1
    intList.print();

    try {
        std::cout << "First element: " << intList.getFirst() << std::endl;
        std::cout << "Last element: " << intList.getLast() << std::endl;
        std::cout << "Element at index 1: " << intList.getAt(1) << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
