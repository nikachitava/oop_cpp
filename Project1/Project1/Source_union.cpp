
#include <iostream>

using namespace std;

union MyUnion
{
	MyUnion();
	MyUnion(int, int, int);
	int x, y; // default public
	void set_z(int);
	int get_z();
private:
	int z;

};

MyUnion::MyUnion() {
	this->x = this->y = this->z = 0;
}

MyUnion::MyUnion(int x, int y, int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

void MyUnion::set_z(int z) {
	this->z = z;
}

int MyUnion::get_z() {
	return z;
}


//int main() {
//
//	MyUnion mu;
//
//	mu.x = 10;
//	mu.y = 11;
//	mu.set_z(12);
//
//	cout << mu.get_z() << "\n";
//
//	MyUnion mu2(-1, 0, 7);
//
//	cout << mu2.x << " " << mu.y << " " << mu2.get_z() << "\n";
//
//}
