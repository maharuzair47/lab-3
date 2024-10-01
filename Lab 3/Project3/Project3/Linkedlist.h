#pragma once

#include "Node.h"

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    void insert(char val);
    void display();
    Node* getHead();
    ~LinkedList();
};


