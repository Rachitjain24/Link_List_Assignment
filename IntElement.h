#ifndef INTELEMENT_H
#define INTELEMENT_H

#include "ListElement.h"

class IntElement : public ListElement {
public:
    IntElement(int value);
    void print();

private:
    int value;
};

#endif  // INTELEMENT_H