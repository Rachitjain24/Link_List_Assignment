//
// Created by User on 01.07.24.
//

#include "FloatElement.h"
#include <iostream>
using namespace std;

FloatElement::FloatElement(float f) {
    data = f;
}

FloatElement::~FloatElement() {}

void FloatElement::print() const {
    cout << "A FloatElement with value: " << data << endl;
}

void FloatElement::input() {
    cout << "Please give a float: "; cin >> data;
}
