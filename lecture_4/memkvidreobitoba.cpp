#include <iostream>

using namespace std;

class A {
public:
    int x;

private:
    int z;

protected:
    int t;

};

class B:public A{
public:
    int y;
    void set_t(int t);
    int get_t();

    
};

void B::set_t(int t) {
    this -> t = t;
}

int B::get_t() {
    return t;
}

int main() {
    A a;
    B b;

    b.x = 12;
    // b.z = 9;
    

    

    return 0;
}