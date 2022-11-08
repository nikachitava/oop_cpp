#include <iostream>

using namespace std;

class A {
public: 
    int x;

protected:
    int y;

private:
    int z;
};

class B: public A {
public:
    int k;
    
};



class C: protected A {
public:
    void set_y(int);
    int get_y();    

};

void C::set_y(int y) {
    this -> y = y;
}
int C::get_y() {
    return y;
}



int main() {
    A a;
    B b;
    C c;

    
    b.x = 21;
    cout << b.x << endl;
    cout << "--------------------" << endl;
    c.set_y(22);
    cout << c.get_y() << endl;


    

    

    return 0;
}