#include <iostream>
#include <cmath>


using namespace std;

class point {
public:
    float x;
    point();
    point(float);
    void set_x(float);
    virtual float distance();
};

point::point() { this -> x = 0; }
point::point(float x) { this -> x = x; }
void point::set_x(float x) {
    this -> x = x;
}
float point::distance() {
    return x;
}

class point2 : public point {
public:
    float y;
    point2();
    point2(float, float);
    void set_y(float);
    float distance();
    void quarter();
};

point2::point2() {
    this -> x = 0;
    this -> y = 0;
}

point2::point2(float x, float y) {
    this -> x = x;
    this -> y = y;
}
void point2::set_y(float y) {
    this -> y = y;
}
float point2::distance() {
    return sqrt(pow(this->x, 2)+pow(this->y,2));
}
void point2::quarter() {
    if(this -> x == 0 && this -> y == 0) {
        cout << "Koordinatta satave.";
    } else if (this -> x != 0 && this -> y == 0) {
        cout << "Abscisata gerdzi";
    } else if(this -> x == 0 && this -> y != 0) {
        cout << "Oordinatta gerdzi";
    }
}


int main() {
    point *a;
    point A;
    point B(5);

   // A.x = 19;
    A.set_x(19);

    a = &A;
    cout << "Distance From object A: " << this -> A.distance() << "\n";

    a = &B;
    cout << "Distance From object A: " << this -> B.distance() << "\n";


    cout << "---------------------------------------------" << endl;
    

    point2 C;
    a = &C;

    C.set_x(8);
    C.set_y(9);
    cout << "Distance From object A: " << this -> C.distance() << "\n";


    point2 D(4, 5);
    a = &D;
    cout << "Distance From object A: " << this -> D.distance() << "\n";


    
    



    return 0;
}