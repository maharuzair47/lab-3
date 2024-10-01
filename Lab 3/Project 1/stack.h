#pragma once
#include "node.h"

class Stack {
private:
    node* topnode;
public:
    Stack();
    void push(int v);
    int pop();
    bool isEmpty();
    int top();
    void display();
    ~Stack();
};

