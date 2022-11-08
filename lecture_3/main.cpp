#include <iostream>

using namespace std;

class MyClass {
private:
    int x, y;

public:
    MyClass();
    MyClass(int, int);
    void set();
    void set(int, int);
    void print();
};

void MyClass::set() {
    this ->x = 0;
    this ->y = 0;
}

void MyClass::set(int x, int y) {
    this->x = x;
    this->y = y;
}

void MyClass::print() {
    cout << x << " " << y << " \n";
}

MyClass::MyClass() {
    this-> x = 1;
    this-> y = 1;
}

MyClass::MyClass(int x, int y) {
    this-> x = x;
    this-> y = y;
}

int main() {
    MyClass mc;

    // mc.set();
    // mc.print();

    // mc.set(2,3);
    // mc.print();

    
    return 0;
}