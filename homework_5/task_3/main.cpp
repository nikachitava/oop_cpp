#include <iostream>
#include <cmath>

using namespace std;

#define PI acos(-1)

class geometria {
protected:
    float R;
public:
    virtual float f() = 0;

};

class circle : public geometria {
public:
    float f();

};

class sphere : public geometria {
public:
    float f();

};

float f::circle() {
    return 2 * this->R * PI;
}

float f::circle() {
    return 4 / 3 * PI * pow(this->R, 3);
}

int main() {


    return 0;
}