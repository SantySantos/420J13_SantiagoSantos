#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include <iostream>
#include "list.h"
#include "Node.h"


template<typename T>
class LinkedList : public List<T> {
public:
    Node<T>* head;
    int listSize;

    LinkedList() : head(nullptr), listSize(0) {}
    ~LinkedList() {
        Node<T>* current = head;
        while (current != nullptr) {
            Node<T>* next = current->next;
            delete current;
            current = next;
        }
    }

    void insertAtStart(const T& value) override {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = head;
        head = newNode;
        listSize++;
    }

    void insertAtEnd(const T& value) override {
        Node<T>* newNode = new Node<T>(value);
        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node<T>* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
        listSize++;
    }
    
    void insertAt(const T& value, const int index) override {
        if (index < 0 || index > listSize) {
            throw std::out_of_range("Index out of range");
        }

        if (index == 0) {
            insertAtStart(value);
            return;
        }

        Node<T>* newNode = new Node<T>(value);
        Node<T>* current = head;
        for (int i = 1; i < index; i++) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        listSize++;
    }
    
    void removeHead() {
        if (head != nullptr) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
            listSize--;
        }

    }

    void remove(const T& value) override {
        if (head == nullptr) return;
        if (head->data == value) {
            removeHead();
            return;
        }

        Node<T>* current = head;
        while (current->next != nullptr) {
            if (current->next->data == value) {
                Node<T>* temp = current->next;
                current->next = current->next->next;
                delete temp;
                listSize--;
                return;
            }
            current = current->next;
        }
    }

    void removeAt(const int index) override {
        if (index < 0 || index >= listSize) {
            throw std::out_of_range("Index out of range");
        }

        if (index == 0) {
            removeHead();
            return;
        }

        Node<T>* current = head;
        for (int i = 1; i < index; i++) {
            current = current->next;
        }
        Node<T>* temp = current->next;
        current->next = temp->next;
        delete temp;
        listSize--;
    }

    T& getFirst() override {
        if (head == nullptr) {
            throw std::out_of_range("List is empty");
        }
        return head->data;
    }

    T& getLast() override {
        if (head == nullptr) {
            throw std::out_of_range("List is empty");
        }

        Node<T>* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        return current->data;
    }

    T& getAt(const int index) override {
        if (index < 0 || index >= listSize) {
            throw std::out_of_range("Index out of range");
        }

        Node<T>* current = head;
        for (int i = 1; i <= index; ++i) {
            current = current->next;
        }
        return current->data;
    }

    bool isEmpty() const override {
        return head == nullptr;
    }

    int size() const override {
        return listSize;
    }

    void print() const override {
        Node<T>* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

#endif