#include <iostream>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList() {
    head = NULL;
}
void LinkedList::display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void LinkedList::insert(int val) {
    Node* newNode = new Node(val);

    if (head == NULL || head->value >= val) {
        newNode->next = head;
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL && temp->next->value < val) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

LinkedList::~LinkedList() {
    Node* current = head;
    Node* nextNode;

    while (current != NULL) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
}
