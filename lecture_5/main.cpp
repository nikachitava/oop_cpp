// #include <iostream>

// using namespace std;

// class shape {
// protected:
//     float w;
//     float h;
// };

// class Rectangle : public shape {
// public:
//     void set_rectangle(float w, float h);
//     float get_w();
//     float get_h();
//     float get_S();
// };

// class Triangle : public shape {
// public:
//     void set_triangle(float w, float h);
//     float get_w();
//     float get_h();
//     float get_S();
// };

// void Rectangle::set_rectangle(float w, float h) {
//     this -> w  = w;
//     this -> h = h;
// }
// float Rectangle::get_w() {
//     return w;
// }
// float Rectangle::get_h() {
//     return h;
// }
// float Rectangle::get_S() {
//     return w * h;
// }


// void Triangle::set_triangle(float w, float h) {
//     this -> w = w;
//     this -> h = h;
// }
// float Triangle::get_w() {
//     return w;
// }
// float Triangle::get_h() {
//     return h;
// }
// float Triangle::get_S() {
//     return (w * h)/2;
// }

// int main() {
//     Rectangle obj1;
//     obj1.set_rectangle(1, 1);
//     cout << obj1.get_w() << " " << obj1.get_h() << endl;
//     cout << "Martkutxedis fartobi: " << obj1.get_S() << endl;

//     Triangle obj2;
//     obj2.set_triangle(2, 2);
//     cout << obj2.get_w() << " " << obj2.get_h() << endl;
//     cout << "Martkutxa samkutxedis fartobi: " << obj2.get_S() << endl;
    

//     return 0;
// }

#include <iostream>
#include<cmath>
using namespace std;

class point {
protected:
    int x;
public:
    point();
    point(int);
    void set_x(int);
    int distance();
};

point::point() {
    this -> x = 0;
};
point::point(int x) {
    this -> x = x;
};
void point::set_x(int x) {
    this -> x = x;
};
int point::distance() {
    return x;
};
class point2:public point {
    protected:
        int y;
    public:
        point2();
        point2(int);
        void set_y(int);
        int distance();
        void quarter();
};
point2::point2() {
    this -> x = 0;
};
point2::point2(int) {
    this -> x = x;
};
void point2::set_y(int y) {
    this -> y = y;
};
int point2::distance() {
    return sqrt(pow(x, 2)+pow(y,2));
};
void point2::quarter(){
    if(x==0 && y==0){
        std::cout << "კორდინატთა სათავე" << std::endl;
    }else if(x!=0 && y==0){
        std::cout << "აბცისათა ღერძი" << std::endl;
    }else{
        std::cout << "ორდინატთა  ღერძი" << std::endl;
    }
};
int main()
{
    point point;
    point.set_x(10);
    std::cout << point.distance() << std::endl;
    point2 point2;
    point2.set_x(1);
    point2.set_y(10);
    std::cout << point2.distance() << std::endl;
    point2.quarter();
    point A;
    // point B(7);
    // A.x=11;
    std::cout << A.distance()  << std::endl;
    return 0;
}
