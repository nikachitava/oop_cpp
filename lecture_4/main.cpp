#include <iostream>

using namespace std;

class MyClass {
public:
    int x, y;
    static int z;
    static void print();

};

int MyClass::z = 100;

void MyClass::print() {
    cout << "EU\n";
}

int main() {
    MyClass mc1, mc2;   

    mc1.x = 11;
    mc1.y = 12;

    mc2.x = 21;
    mc2.y = 22;

    cout << mc1.x << " " << mc1.y << " " << mc1.z <<  "\n";
    cout << mc2.x << " " << mc2.y << " " << mc2.z << "\n";

    mc1.z = 200;
    mc1.x = 20;

    cout << mc1.x << " " << mc1.y << " " << mc1.z <<  "\n";
    cout << mc2.x << " " << mc2.y << " " << mc2.z << "\n";

    MyClass::print();
    return 0;
}