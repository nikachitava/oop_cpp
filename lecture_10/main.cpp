#include <iostream>

using namespace std;

struct MyStruct {
    MyStruct();
    MyStruct(int, int);
    void set();
    void set(int, int);
    void print();

private:
    int x, y;
};

MyStruct::MyStruct() {
    this->x = 1;
    this->y = 1;
}

MyStruct::MyStruct(int x, int y) {
    this->x = x;
    this->y = y;
}

void MyStruct::set() {
    this->x = 0;
    this->y = 0;
}
void MyStruct::set(int x, int y) {
    this->x = x < 0 ? -x : x;
    this->y = y < 0 ? -y : y;
}

void MyStruct::print() {
    cout << x << " " << y << "\n";
}

int main()
{
    MyStruct mc1, mc2(10, 11);

    mc1.print();
    mc2.print();

}