#include <iostream>

using namespace std;

class martkutxedi {
protected:
    float a, b;
public:
    martkutxedi();
    martkutxedi(float, float);
    float P();
    float area();

    float get_a() { return a; }
    float get_b() { return b; }
};

martkutxedi::martkutxedi() {
    this -> a = 0;
    this -> b = 0;
}

martkutxedi::martkutxedi(float a, float b) {
    this -> a = a;
    this -> b = b;
}

float martkutxedi::P() {
    return 2 * (a+b);
}

float martkutxedi::area() {
    return a * b;
}

class kvadrati : public martkutxedi {
protected:
    float c;
public:
    kvadrati();
    kvadrati(float);
    float P();
    float area();
};

kvadrati::kvadrati() {
    this -> c = 0;
}

kvadrati::kvadrati(float c) {
    this -> c = c;
}

float kvadrati::P() {
    return 4 * c;
}

float kvadrati::area() {
    return c * c;
}


int main() {
    martkutxedi ob1(2, 3);
    
    cout << ob1.area() << endl;
    cout << ob1.P() << endl;

    kvadrati ob2(5);
    cout << ob2.area() << endl;
    cout << ob2.P();

    return 0;
}