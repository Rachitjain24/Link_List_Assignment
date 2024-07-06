#ifndef STRINGELEMENT_H
#define STRINGELEMENT_H

#include "ListElement.h"
#include <string>

class StringElement : public ListElement {
public:
    StringElement(const std::string& value);
    void print();

private:
    std::string value;
};

#endif  // STRINGELEMENT_H