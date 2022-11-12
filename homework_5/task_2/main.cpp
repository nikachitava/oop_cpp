#include <iostream>

using namespace std;

class A {
public:
    virtual void print() {
        cout << "Class A" << endl;
    }

};

class B : public A {
public:
    void print() {
        cout << "Class B"<< endl;
    }

};

class C : public A {
public:
    void print() {
        cout << "Class C"<< endl;
    }
};



int main() {
    A *ptr;
    A a;
    B b;
    C c;

    ptr = &a;
    ptr -> print();

    ptr = &b;
    ptr -> print();

    ptr = &c;
    ptr -> print();
    
    return 0;
}