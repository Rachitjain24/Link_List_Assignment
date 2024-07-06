#ifndef LIST_H
#define LIST_H

class ListElement;

class List {
public:
    List();
    ~List();
    void add(ListElement* element, int index);
    void remove(ListElement* element);
    ListElement* getStart();
    void print();

private:
    struct Node {
        ListElement* element;
        Node* next;
    };
    Node* head;
};

#endif  // LIST_H