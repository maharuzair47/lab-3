#include "Stack.h"
#include <iostream>

Stack::Stack() {
    topnode = NULL;
}
void Stack::push(int val) {
    node* newNode = new node(val);
    newNode->next = topnode;
    topnode = newNode;
    cout << val << " pushed in stack." << endl;
}
int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return -1;
    }
    else {
        node* temp = topnode;
        topnode = topnode->next;
        int poppedValue = temp->value;
        delete temp;
        cout << poppedValue << " popped from stack." << endl;
        return poppedValue;
    }
}
bool Stack::isEmpty() {
    return topnode == NULL;
}

int Stack::top() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return -1;
    }
    return topnode->value;
}

void Stack::display() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
    }
    else {
        node* temp = topnode;
        cout << "stack: ";
        while (temp != NULL) {
            cout << temp->value << "-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}

Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}
