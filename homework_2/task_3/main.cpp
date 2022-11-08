// Code - 1

// #include <iostream>

// using namespace std;

// class MyClass{
// public:
//     int x;
//     int y;
//     char c;
//     double z;
//     void print();
//     void set_a(int e);
//     int get_a();
// private:
//     int a;
//     int b;
// };

// void MyClass::set_a(int e) {
//     a = e;
// }
// void MyClass::print() {
//     cout << x << " " << y << " " << c << " " << z << "\n";
// }
// int MyClass::get_a() {
//     return a;
// }

// int main()
// {
//     MyClass ob;

//     ob.x = 10;
//     ob.y = 20;
//     ob.c = 'C';
//     ob.z = 10.6;

//     ob.print();

//     ob.set_a(14);
//     cout << ob.get_a() << "\n";

// }

// Code - 2

// #include <iostream>

// using namespace std;

// class MyClass{
// public:
//     int x;
//     int y;
//     char c;
//     double z;
//     void print();
//     void set_a(int e);
//     void set_b(int e);
//     int get_a();
//     int get_b();
// private:
//     int a;
//     int b;
// };

// void MyClass::print() {
//     cout << x << " " << y << " " << c << " " << z << "\n";
// }

// void MyClass::set_a(int e) {
//     a = e;
// }

// void MyClass::set_b(int e) {
//     b = e;
// }

// int MyClass::get_a() {
//     return a;
// }
// int MyClass::get_b() {
//     return b;
// }

// int main()
// {
//     MyClass ob;

//     ob.x = 10;
//     ob.y = 20;
//     ob.c = 'C';
//     ob.z = 10.6;

//     ob.print();

//     ob.set_a(14);
//     cout << ob.get_a() << "\n";

//     ob.set_a(18);
//     cout << ob.get_a() << "\n";

//     ob.set_a(24);
//     cout << ob.get_a() << "\n";

//     ob.set_b(11);
//     cout << ob.get_b() << "\n";

// }

// //g++  7.4.0

// #include <iostream>

// using namespace std;

// class MyClass{
// public:
//     int x;
//     int y;
//     char c;
//     double z;
//     void print(){
//         cout << x << " " << y << " " << c << " " << z << "\n";
//     }
//     void set_a(int a){
//         this->a = a;
//     }
//     void set_b(int e){
//         b = e;
//     }
//     int get_a(){
//         return this->a;
//     }
//     int get_b(){
//         return b;
//     }
// private:
//     int a;
//     int b;
// };

// int main()
// {
//     MyClass ob;

//     ob.x = 10;
//     ob.y = 20;
//     ob.c = 'C';
//     ob.z = 10.6;

//     ob.print();

//     ob.set_a(14);
//     cout << ob.get_a() << "\n";

//     ob.set_a(18);
//     cout << ob.get_a() << "\n";

//     ob.set_a(24);
//     cout << ob.get_a() << "\n";

//     ob.set_b(11);
//     cout << ob.get_b() << "\n";
//     // ob.a = 7;

// }

// Code - 3

// #include <iostream>

// using namespace std;

// class MyClass{
// public:
//     int x;
//     int y;
//     char c;
//     double z;
//     void print();
//     void set(int a, int b);
//     int get_a();
//     int get_b();
// private:
//     int a;
//     int b;
// };

// void MyClass::print() {
//     cout << x << " " << y << " " << c << " " << z << "\n";
// }

// void MyClass::set(int a, int b) {
//     this->a = a;
//     this->b = b;
// }
// int MyClass::get_a() {
//     return this->a;
// }

// int MyClass::get_b() {
//     return b;
// }

// int main()
// {
//     MyClass ob;

//     ob.x = 10;
//     ob.y = 20;
//     ob.c = 'C';
//     ob.z = 10.6;

//     ob.print();

//     ob.set(14, 10);
//     cout << ob.get_a() << "\n";
//     cout << ob.get_b() << "\n";
//     // ob.a = 7;

// }

// Code - 4

// #include <iostream>
// using namespace std;

// class triangle{
//     public:
//     double x, y, z;
// };

// int main()
// {
//     triangle t;
//     cin >> t.x >> t.y >> t.z;
//     cout << t.x << " " << t.y << " " << t.z << endl;
// }

// Code - 5

// #include <iostream>
// using namespace std;

// class triangle{
// private:
//     double x, y, z;
// public:
//     void set(double x, double y, double z);
//     void print();
// };

// void triangle::set(double x, double y, double z) {
//      this->x = x;
//         this->y = y;
//         this->z = z;
// }

// void triangle::print() {
//     cout << x << " " << y << " " << z << "\n";
// }

// int main()
// {
//     triangle t;

//     t.set(3,4,5);
//     t.print();

//     t.set(6,8,10);
//     t.print();

// }

// Code - 6

// #include <bits/stdc++.h>
// using namespace std;

// class triangle
// {
// private:
//     double x, y, z;

// public:
//     void set(double x, double y, double z);
//     void print();
//     double P();
//     double S();
// };

// void triangle::set(double x, double y, double z) {
//     this->x = x;
//     this->y = y;
//     this->z = z;
// }
// void triangle::print() {
//     cout << x << " " << y << " " << z << "\n";
// }
// double triangle::P() {
//     return x + y + z;
// }
// double triangle::S() {
//     double p = P() / 2;
//     return sqrt(p * (p - x) * (p - y) * (p - z));
// }

// int main()
// {
//     triangle t;

//     t.set(3, 4, 5);
//     t.print();
//     cout << "p = " << t.P() << " s = " << t.S() << endl;

//     t.set(6, 8, 10);
//     t.print();
//     cout << "p = " << t.P() << " s = " << t.S() << endl;
// }

// Code - 7

// #include <bits/stdc++.h>
// using namespace std;

// class triangle
// {
// private:
//     double x, y, z;

// public:
//     void set(double x, double y, double z);
//     void print();
//     double P();
//     double S();
//     bool isTriangle();
// };

// void triangle::set(double x, double y, double z) {
//     this->x = x;
//     this->y = y;
//     this->z = z;
// }
// void triangle::print() {
//     cout << x << " " << y << " " << z << "\n";
// }
// double triangle::P() {
//     if (!isTriangle())
//         return -1;
//     return x + y + z;
// }
// double triangle::S() {
//     if (!isTriangle())
//         return -1;
//     double p = P() / 2;
//     return sqrt(p * (p - x) * (p - y) * (p - z));
// }
// bool triangle::isTriangle() {
//     return (x + y > z && y + z > x && z + x > y);
// }

// int main()
// {
//     triangle t;

//     t.set(3, 4, 5);
//     t.print();
//     cout << "p = " << t.P() << " s = " << t.S() << endl;

//     t.set(6, 8, 10);
//     t.print();
//     cout << "p = " << t.P() << " s = " << t.S() << endl;

//     t.set(1, 2, 4);
//     t.print();
//     cout << "p = " << t.P() << " s = " << t.S() << endl;
// }

// // 8

// //g++  7.4.0

// #include <iostream>

// using namespace std;

// class MyClass{
// public:
//     int x;
//     int y;
//     char c;
//     double z;
//     void print();
//     void set_a(int);
//     int get_a();
// private:
//     int a;
//     int b;
// };

// void MyClass::print(){
//     cout << x << " " << y << " " << c << " " << z << "\n";
// }
// void MyClass::set_a(int a){
//     this->a = a;
// }
// int MyClass::get_a(){
//     return this->a;
// }

// int main()
// {
//     MyClass ob;

//     ob.x = 10;
//     ob.y = 20;
//     ob.c = 'C';
//     ob.z = 10.6;

//     ob.print();

//     ob.set_a(14);
//     cout << ob.get_a() << "\n";

//     // ob.a = 7;

// }

// // 9

// //g++  7.4.0

// #include <iostream>

// using namespace std;

// class MyClass{
// public:
//     void print();

//     void set();
//     void set(int);
//     void set(double);
//     void set(int, int);
//     void set(int, int, double);

//     int get_x();
//     int get_y();
// private:
//     int x, y;
//     double z;
// };

// void MyClass::print(){
//     cout << x << " " << y << " " << z << "\n";
// }

// void MyClass::set(){
//     this->x = 0;
//     this->y = 0;
//     this->z = 0;
// }

// void MyClass::set(int x){
//     this->x = x;
//     this->y = 0;
//     this->z = 0;
// }

// void MyClass::set(double z){
//     this->x = 0;
//     this->y = 0;
//     this->z = z;
// }

// void MyClass::set(int x, int y){
//     this->x = x;
//     this->y = y;
//     this->z = 0;
// }

// void MyClass::set(int x, int y, double z){
//     this->x = x;
//     this->y = y;
//     this->z = z;
// }

// int main()
// {
//     MyClass ob;

//     ob.set();
//     ob.print();

//     ob.set(10);
//     ob.print();

//     ob.set(10.0);
//     ob.print();

//     ob.set(4, 7);
//     ob.print();

//     ob.set(1, 2, 3.0);
//     ob.print();

// }
