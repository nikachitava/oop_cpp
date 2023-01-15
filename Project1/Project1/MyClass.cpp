
#include "MyClass.h"

#include <iostream>

MyClass::MyClass() {
    this->x = 1;
    this->y = 1;
}

MyClass::MyClass(int x, int y) {
    this->x = x;
    this->y = y;
}

void MyClass::set() {
    this->x = 0;
    this->y = 0;
}
void MyClass::set(int x, int y) {
    this->x = x < 0 ? -x : x;
    this->y = y < 0 ? -y : y;
}

void MyClass::print() {
    std::cout << x << " " << y << "\n";
}
