#include <iostream>
#include <cmath>

using namespace std;


class triangle {
public:
    void set_value(double a, double b, double c);
    double get_a();
    double get_b();
    double get_c();

private:
    double a, b, c;
};

void triangle::set_value(double a, double b, double c) {
    this -> a = a;
    this -> b = b;
    this -> c = c;
}
double triangle::get_a() { return a; }
double triangle::get_b() { return b; }
double triangle::get_c() { return c; }

triangle::triangle() {
    this-> a = 1;
    this-> b = 1;
    this-> c = 1;
}

int main() {

    triangle obj;
    obj.set_value(3, 4, 5);

    if(obj.get_a() == obj.get_b() && obj.get_a() == obj.get_c()) {
        cout << "Tolgverda samkutxedi";
    } else if (obj.get_a() == obj.get_b() || obj.get_a() == obj.get_c() || obj.get_b() == obj.get_a()) {
        cout << "Tolferda samkutxedi";
    } else if (pow(obj.get_a(), 2) + pow(obj.get_b(), 2) == pow(obj.get_c(), 2)
     || pow(obj.get_b(), 2) + pow(obj.get_c(), 2) == pow(obj.get_a(), 2)
     || pow(obj.get_a(), 2) + pow(obj.get_c(), 2) == pow(obj.get_b(), 2)) {
        cout << "Martkutxda samkutxedi";   
    } else {
        cout << "Chveulebrivi samkutxedi";
    }
    
    return 0;
}