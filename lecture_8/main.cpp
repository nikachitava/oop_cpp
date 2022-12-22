#include <iostream>

using namespace std;

class coord {
private:
    int x, y;
public:
    coord();
    coord(int ,int);
    void plus(coord);
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

void coord ::plus(coord obj) {
    this -> x += obj.x;
    this -> y += obj.y;
    
}
int coord ::get_x() { return x; }
int coord ::get_y() { return y; }
void coord ::set_x(int) { this->x = x; }
void coord ::set_y(int) { this->y=y; }



int main() {
    coord ob1(3, 4), obj2(10, 11);
    ob1.plus(obj2);
    cout << ob1.get_x() << " " << ob1.get_y() << endl;

    


    return 0;
}