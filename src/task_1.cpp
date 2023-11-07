#include "task_1.h"
#include <stdexcept>

Stack::Stack() : head(nullptr) {}

Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

void Stack::push(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

int Stack::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    int data = head->data;
    Node* temp = head;
    head = head->next;
    delete temp;
    return data;
}

int Stack::top() {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    return head->data;
}

bool Stack::isEmpty() {
    return head == nullptr;
}

