#include <iostream>

using namespace std;

template <typename T>
class martkutxedi {
private:
    T a, b;
public:
    martkutxedi(T a, T b) {
        this -> a = a;
        this -> b = b;
    }
    T P() { return 2 * (a+b); }
    T area() { return a * b; }
    void set_a(T a) { this -> a = a; }
    void set_b(T) { this -> b = b; }
    T get_a() { return a; }
    T get_b() { return b; }
};

int main() {
    martkutxedi<int> ob1(3, 4);
    cout << "a: " << ob1.get_a() << endl;
    cout << "b: " << ob1.get_b() << endl;
    cout << "P: " << ob1.P() << endl;
    cout << "S: " << ob1.area() << endl;

    cout << "---------------------" << endl;

    ob1.set_a(5);
    ob1.set_b(6);
    cout << "P: " << ob1.P() << endl;
    cout << "S: " << ob1.area() << endl;
    

    return 0;
}