#include <iostream>

using namespace std;

class MyClass {
public: 
    int x;
    int y;
    char c;
    double z;

    void printt() {
        cout << x << " " << y << " " << c << " " << z;
    }

    void set_a (int e) {
        a = e;
    }

    int get_a() {
        return a;
    }

    void set_b(int k) {
        b = k;
    }

    int get_b() {
        return b;
    }

private:
    int a;
    int b;

};

class threeAngle() {
public:
    int a;
    int b;
    int c;

};


int main() {

    MyClass ob;
    ob.x = 10;
    ob.y = 20;
    ob.c = 'C';
    ob.z = 10.6;

    ob.set_b(18);
    // cout << ob.get_b();

    // ob.a = 18;

    threeAngle obj1;

    obj1.a = 3;
    obj1.b = 4;
    obj1.c = 5;
    cout << a << " " << b << " " << c;

    return 0;
}