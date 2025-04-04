#include "Node.h"

template<typename T>
class Node {
public:
    T data;
    Node<T>* next;
    Node(const T& data) : data(data), next(nullptr) {}
};

