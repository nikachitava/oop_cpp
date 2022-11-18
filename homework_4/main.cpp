#include <iostream>

using namespace std;

class martkutxedi {
protected:
    float a;
    float b;
public:
    martkutxedi();
    martkutxedi(float, float);
    float P();
    float area();
    void set(float, float);
};

class kvadrati : public martkutxedi {
public:
    kvadrati();
    kvadrati(float);
};

martkutxedi :: martkutxedi() {
    this -> a = 0;
    this -> b = 0;
}

martkutxedi :: martkutxedi(float a, float b) {
    this -> a = a;
    this -> b = b;
}

kvadrati :: kvadrati () : martkutxedi() {
    this -> a = 0;
}

kvadrati :: kvadrati (float a) : martkutxedi(a, b) {
    this -> a = a;
    this -> b = a;
}

float martkutxedi::P () {
    if(a == b) {
        return 4 * a;
    } else {
        return 2 * (a+b);
    }
}

float martkutxedi::area () {
    if(a == b) {
        return a * a;
    } else {
        return a * b;
    }
}

void martkutxedi::set(float a, float b) {
    this -> a = a;
    this -> b = b;
}


int main() {

    martkutxedi ob();
    martkutxedi ob1(2, 3);
    cout << "Martkutxedis perimetri:" << ob1.P() << "\t" << " Martkutxedis fartobi: " << ob1.area() << endl;

    ob1.set(3, 4);
    cout << "Martkutxedis perimetri:" << ob1.P() << "\t" << " Martkutxedis fartobi: " << ob1.area() << endl;

    kvadrati ob2();
    kvadrati ob3(8);
    cout << "Kvadratis perimetri:" << ob3.P() << "\t" << " Kvadratis fartobi: " << ob3.area() << endl;


    return 0;
}