/*
 * Author:
 * Date:
 * Name:task1
 */
#ifndef TASK_1_H
#define TASK_1_H

struct Node {
    int data;
    Node* next;
};

class Stack {
public:
    Stack();
    ~Stack();
    void push(int data);
    int pop();
    int top();
    bool isEmpty();

private:
    Node* head;
};

#endif // TASK_1_H
