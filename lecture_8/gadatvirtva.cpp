#include <iostream>

using namespace std;

class coord {
private:
    int x, y;
public:
    coord();
    coord(int ,int);

    coord operator +(coord);
    coord operator -(coord);
    coord operator /(coord);
    coord operator --();
    bool operator ==(coord);

    int get_x();
    int get_y();
    void set_x(int);
    void set_y(int);
};

coord :: coord () {
    this -> x = 0;
    this -> y = 0;
}

coord :: coord (int x, int y) {
    this -> x = x;
    this -> y = y;
}

coord coord ::operator +(coord obj) {
    coord temp;
    temp.x = this -> x += obj.x;
    temp.y = this -> y += obj.y;
    return temp;
    
}
coord coord ::operator -(coord obj) {
    coord temp;
    temp.x = this -> x -= obj.x;
    temp.y = this -> y -= obj.y;
    return temp;
    
}
coord coord ::operator /(coord obj) {
    coord temp;
    temp.x = this -> x /= obj.x;
    temp.y = this -> y /= obj.y;
    return temp;
    
}

coord coord ::operator --() {
    this->x--;
    this->y--;
    return *this;
} 

bool coord :: operator ==(coord obj) {
    return this->x == obj.x && this ->y == obj.y;

}

int coord ::get_x() { return x; }
int coord ::get_y() { return y; }
void coord ::set_x(int) { this->x = x; }
void coord ::set_y(int) { this->y = y; }


int main() {
    coord obj1(5, 4), obj2(5, 4), obj3;
    obj3 = obj1 + obj2;
    cout << obj3.get_x() << " " << obj3.get_y() << endl;

    return 0;
}