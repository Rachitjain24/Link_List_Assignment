#include "List.h"
#include "IntElement.h"
#include "StringElement.h"
#include <iostream>

int main() {
    List l;

    for (int i = 0; i < 10; i++) {
        if (i % 2) {
            l.add(new StringElement("Hello, world!"), 0);
        } else {
            l.add(new IntElement(i), 0);
        }
    }

    l.print();

    ListElement* le = l.getStart()->getNext()->getNext();
    l.remove(le);
    l.print();

    delete le;

    return 0;
}