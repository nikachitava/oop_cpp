#include <iostream>

using namespace std;

class Complex {
private:
    double a, b;
public:
    Complex();
    Complex(double);
    Complex(double, double);
    //
    void print();
    //
    Complex operator+(Complex);
    Complex operator-(Complex);
    bool operator==(Complex);
    Complex operator*(Complex);
};


Complex :: Complex () {
    this -> a = 0;
    this -> b = 0;
}

Complex :: Complex (double a) {
    this -> a = a;
    this -> b = 0;
}

Complex :: Complex (double a, double b) {
    this -> a = a;
    this -> b = b;
}

void Complex::print() {
    if(a && b) cout << a << ((b>0) ? "+" : " ") << b << "i" << endl; 
    else if(!b) cout << a << endl; 
    else if(!a) cout << b << endl; 
    else cout << 0;
}

Complex Complex::operator+(Complex obj) {
    Complex temp;
    temp.a = this->a + obj.a;
    temp.b = this->b + obj.b;
    return temp;
}

Complex Complex::operator-(Complex obj) {
    Complex temp;
    temp.a = this->a - obj.a;
    temp.b = this->b - obj.b;
    return temp;
}

Complex Complex::operator*(Complex obj) {
    Complex temp;
    temp.a = this->a * obj.a - this->b * obj.b;
    temp.b = this->b * obj.b + this->b * obj.a;
    return temp;
}

bool Complex::operator==(Complex obj) {
    return this->a == obj.a && this ->b == obj.b;
}

int main() {
    Complex r1(3, 4), r2(-5, 7), r3;

    r1.print();
    r2.print();
    r3 = r1 * r2;
    r3.print();
    

    return 0;
}