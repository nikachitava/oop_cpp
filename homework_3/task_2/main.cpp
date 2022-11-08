#include <iostream>
#include <cmath>

using namespace std;


class rectangle {
public: 
    rectangle();
    void set_rectangle(int, int); 
    void set_rectangle(int);
    void print();

    int get_a() {
        return a;
    }
    int get_b() {
        return b;
    }
    int P() {
        return 2*(a+b);
    }
    int S() {
        return a*b;
    }
private:
    int a, b;
};

void rectangle::set_rectangle(int a, int b) {
    this -> a = a;
    this -> b = b;
}

void rectangle::set_rectangle(int a) {
    this -> a = a;
}

void rectangle::print() {
    cout << a << " " << b << " \n";
}


rectangle::rectangle() {
    this->a = 1;
    this->b = 1;
}

int main() {
    
    rectangle rect;
    rect.set_rectangle(2, 4);
    cout << "Gverdebi: ";
    rect.print();
    cout << "Perimetri: " << rect.P() << " || " << "Fartobi:" << rect.S() << endl;

    rect.set_rectangle(4);
    cout << "Gverdebi: ";
    rect.print();
    cout << "Perimetri: " << rect.P() << " || " << "Fartobi:" << rect.S() << endl;

    
    return 0;
}