#include <iostream>

using namespace std;

class A {
public:
    virtual void print() {
        cout << "A class" << endl;
    }
    
};

class B : public A {
public:
    void print() {
        cout << "B class" << endl;
    }
};

class C : public A {
public:
    void print() {
        cout << "C class" << endl;
    }
};

int main() {
    A *a;
    A a1;
    B b;
    C c;

    a = &a1;
    a -> print();

    a = &b;
    a -> print();

    a = &c;
    a -> print();

    return 0;
}