#include <iostream>
#include <cmath>

#define PI acos(-1)

using namespace std;

class geometria {
protected:
    float R;
public:
    virtual float f() = 0;
    void set(float);
    float get_R();
    

};

void geometria::set(float r) {
    this -> R = r;
}

float geometria::get_R() {
    return this -> R;
}

class circle : public geometria {
public:
    float f();
};

class sphere : public geometria {
public:
    float f();
};

float circle::f() {
    return PI * this ->R * this ->R;
}

float sphere::f() {
    return PI * pow(this->R, 3) * 3 / 4;
} 

int main() { 
    geometria *ptr;

    circle ob1;
    ob1.set(4);
    ptr = &ob1;
    cout << "Circle area : " << ptr -> f() << endl;

    sphere ob2;
    ob2.set(8);
    ptr = &ob2;
    cout << "Sphere volume : " << ptr -> f() << endl;

    return 0;
}