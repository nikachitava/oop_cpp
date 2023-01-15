
#include <iostream>

// using namespace std;

namespace M {

	int s;

	int max(int a, int b) {
		if (a > b) return a;
		return b;
	}

	class A {
	public:
		int x, y;
	};

}

namespace N {

	int s;

	int max(int a, int b) {
		if (a > b) return a;
		return b;
	}

	class A {
	public:
		int a, b;
	};

}

//using namespace M;

int main() {

	int a = 10, b = 11;

	//A ma;
	M::A ma;
	N::A na;
	
	std::cout << M::max(a, b) << "\n";
	std::cout << N::max(a, b) << "\n";

}