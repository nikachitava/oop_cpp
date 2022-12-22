#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
class samkutxedi {
private:
    T a, b, c;
public:
    samkutxedi();
    samkutxedi(T, T, T);
    void set_a(T);
    void set_b(T);
    void set_c(T);
    T get_a();
    T get_b();
    T get_c();
    void get_type(T, T, T);
};

template <typename T>
samkutxedi<T> :: samkutxedi(T a, T b, T c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

template <typename T>
void samkutxedi<T> :: set_a(T a) { this-> a = a; } 

template <typename T>
void samkutxedi<T> :: set_b(T b) { this-> b = b; }

template <typename T>
void samkutxedi<T> :: set_c(T c) { this-> c = c; }

template <typename T>
T samkutxedi<T>:: get_a() { return this-> a; }

template <typename T>
T samkutxedi<T>:: get_b() { return this-> b; }

template <typename T>
T samkutxedi<T>:: get_c() { return this-> c; }

template <typename T>
void samkutxedi<T>:: get_type(T a, T b, T c) {
    if(this->a == this->b == this->c) {
        cout << "Tolgverda samkutxedi" << endl;

    } else if(this->a == this->b || this->a == this->c || this->b == this->c) {
        cout << "Tolferda samkutxedi" << endl;

    } else if(this->a != this->b != this->c) {
        cout << "Sxvadasxvagverda samkutxedi" << endl;
    }
}


int main() {

    samkutxedi<int> ob(2, 3, 4);
    
    cout << ob.get_a() << "\n";
    cout << ob.get_b() << "\n";
    cout << ob.get_c() << "\n";
    
    ob.set_a(11);
    ob.set_b(11);
    ob.set_c(11);
    cout << ob.get_a() << "\n";
    cout << ob.get_b() << "\n";   
    cout << ob.get_c() << "\n"; 

    ob.get_type(ob.get_a(), ob.get_b(), ob.get_c());   
    
    return 0;
}