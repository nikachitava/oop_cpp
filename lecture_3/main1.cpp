#include <iostream>
#include <cmath>

using namespace std;

class Vector {
public:
    Vector();
    Vector(int x, int y, int z);
    Vector(const Vector &v);

    void setX(int x);
    void setY(int y);
    void setZ(int z);

    int getX();
    int getY();
    int getZ();

    double length();
    void Out();

private: 
    int x, y, z;

};

Vector::Vector() {
    this-> x = 0;
    this-> y = 0;
    this-> z = 0;
}

Vector::Vector(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

void Vector::setX(int x) {
    this->x = x;
}

void Vector::setY(int y) {
    this->y = y;
}

void Vector::setZ(int z) {
    this->z = z;
}

int Vector::getX() {
    return x;
}

int Vector::getY() {
    return y;
}

int Vector::getZ() {
    return z;
}

double Vector::length() {
    return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
}

void Vector::Out() {
    cout << x << " " << y << " " << z << endl;
}

Vector::Vector(const Vector &v) {
    this-> x = v.x;
    this-> y = v.y;
    this-> z = v.z;
}

int main() {
    Vector v1;
    cout << v1.length() << endl;;
    v1.Out();

    Vector v2(2, 3, 4);
    cout << v2.length() << endl;
    v2.Out();

    Vector v3(v2);
    cout << v3.length() << endl;
    v3.Out();

    v2.setX(18);
    v2.setY(82);
    v2.setZ(876);
    cout << v2.length() << endl;
    v2.Out();
    

    
    return 0;
}