#include <iostream>

using namespace std;

class myClass {
public:
    int a;
    int b;

    void set_x(int b);
    int get_x();

private:
    int x;
    int y;

};

void myClass::set_x(int b) {
    x = b;
};

int myClass::get_x() {
    return x;
}


int main() {

    myClass obj;

    obj.a = 2;
    obj.b = 3;
    cout << obj.a << " " << obj.b << endl;

    
    obj.set_x(123);
    cout << obj.get_x() << endl;

    obj.set_x(643);
    cout << obj.get_x() << endl;

    


    return 0;
}