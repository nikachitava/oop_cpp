#include <iostream>

using namespace std;

class otxkutxedi{
public: 
    int a, b, c, d;
    void print();

};

class kvadrati : otxkutxedi {
public:
    int S() {
        return a*a;
    }
    int P() {
        return 4*a;
    }
};

class martkutxedi : otxkutxedi {
public:
    int S() {
        return a*b;
    }
    int P() {
        return a+b+c+d;
    }
};

void otxkutxedi::print() {
    cout << a << " " << b << " " << c << " " << d << endl;
}


int main() {

    otxkutxedi obj;
    kvadrati obj1;
    martkutxedi obj2;

    obj.a = 2;
    obj.b = 3;
    obj.c = 4;
    obj.d = 5;
    obj.print();

    obj1.a = 23;
    obj1.print();
    

    return 0;
}