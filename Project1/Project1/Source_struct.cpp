
#include <iostream>

using namespace std;

struct MyStruct
{
	MyStruct();
	MyStruct(int, int, int);
	int x, y; // default public
	void set_z(int);
	int get_z();
private:
	int z;

};

MyStruct::MyStruct() {
	this->x = this->y = this->z = 0;
}

MyStruct::MyStruct(int x, int y, int z) {
	this->x = x;
	this->y = y; 
	this->z = z;
}

void MyStruct::set_z(int z) {
	this->z = z;
}

int MyStruct::get_z() {
	return z;
}


//int main() {
//
//	MyStruct ms;
//
//	ms.x = 10;
//	ms.y = 11;
//	ms.set_z(12);
//
//	cout << ms.get_z() << "\n";
//
//	MyStruct ms2(-1, 0, 7);
//
//	cout << ms2.x << " " << ms.y << " " << ms2.get_z() << "\n";
//
//}
