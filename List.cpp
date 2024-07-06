#include "List.h"
#include "ListElement.h"
#include <iostream>

List::List() : head(nullptr) {}

List::~List() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp->element;
        delete temp;
    }
}

void List::add(ListElement* element, int index) {
    Node* newNode = new Node;
    newNode->element = element;
    newNode->next = nullptr;

    if (index == 0) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void List::remove(ListElement* element) {
    Node* temp = head;
    Node* prev = nullptr;

    while (temp && temp->element != element) {
        prev = temp;
        temp = temp->next;
    }

    if (temp) {
        if (prev) {
            prev->next = temp->next;
        } else {
            head = temp->next;
        }
        delete temp->element;
        delete temp;
    }
}

ListElement* List::getStart() {
    if (head) {
        return head->element;
    } else {
        return nullptr;
    }
}

void List::print() {
    Node* temp = head;
    while (temp) {
        temp->element->print();
        temp = temp->next;
    }
}