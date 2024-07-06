//
// Created by User on 01.07.24.
//

#ifndef LIST_FLOATELEMENT_H
#define LIST_FLOATELEMENT_H

#include "ListElement.h"

class FloatElement : public ListElement {
    float data;
public:
    FloatElement(float f=0.0f);
    ~FloatElement();
    void print() const override;
    void input() override;
};

#endif //LIST_FLOATELEMENT_H
