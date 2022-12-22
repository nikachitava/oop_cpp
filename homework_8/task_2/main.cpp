#include <iostream>
#include <cmath>

using namespace std;

template <typename T1>
class samkutxedi {
private:
    T1 a, b, c;
public:
    samkutxedi() { this -> a = this -> b = this -> c = 0; }
    samkutxedi(T1 a, T1 b, T1 c) {
        this -> a = a;
        this -> b = b;
        this -> c = c;
    }
    void set_a(T1 a) { this -> a = a; }
    void set_b(T1 b) { this -> b = b; }
    void set_c(T1 c) { this -> c = c; }
    T1 get_a() { return a; }
    T1 get_b() { return b; }
    T1 get_c() { return c; }

    void get_type(T1 a, T1 b, T1 c) {
        if(this->a == this->b == this->c) {
            cout << "Tolgverda samkutxedi" << endl;

        } else if(this->a == this->b || this->a == this->c || this->b == this->c) {
            cout << "Tolferda samkutxedi" << endl;

        } else if(this->a != this->b != this->c) {
            cout << "Sxvadasxvagverda samkutxedi" << endl;
        }
    }
};


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