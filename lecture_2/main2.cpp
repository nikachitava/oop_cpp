#include <iostream>

using namespace std;

class myClass {
public:
    int getMaxx(int, int, int);
    int getMaxx(int, int);
};

int myClass::getMaxx(int x, int y) {
    int a = max(x, y);
    return a;
}

int myClass::getMaxx(int x, int y, int z) {
    int b = max(x, max(y, z));
    return b;
}

int main() {
    myClass ob;

    cout << ob.getMaxx(9, 2) << endl;
    cout << ob.getMaxx(3, 2, 1) << endl;
    cout << ob.getMaxx(1, 3, 2) << endl;
    cout << ob.getMaxx(1, 2, 3) << endl;

    return 0;
}

/*
1. samkutxedebi gverdebis mixedvit
2. kutxeebis mixedvit
3. erti parametri kvadrati 2parametri martkutxedi.
*/