#include "IntElement.h"
#include <iostream>

IntElement::IntElement(int value) : value(value) {}

void IntElement::print() {
    std::cout << "IntElement: " << value << std::endl;
}