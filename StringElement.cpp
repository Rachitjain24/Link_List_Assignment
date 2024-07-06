#include "StringElement.h"
#include <iostream>

StringElement::StringElement(const std::string& value) : value(value) {}

void StringElement::print() {
    std::cout << "StringElement: " << value << std::endl;
}