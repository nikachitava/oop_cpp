#include <iostream>
#include <cmath>

using namespace std;


class triangle {
public:
    int a, b, c;
};

int main() {

    triangle obj;

    cin >> obj.a >> obj.b >> obj.c;

    if(obj.a == obj.b && obj.a == obj.c) {
        cout << "Tolgverda samkutxedi";
    } else if (obj.a == obj.b || obj.a == obj.c || obj.b == obj.a) {
        cout << "Tolferda samkutxedi";
    } else if (pow(obj.a, 2) + pow(obj.b, 2) == pow(obj.c, 2)
     || pow(obj.b, 2) + pow(obj.c, 2) == pow(obj.a, 2)
     || pow(obj.a, 2) + pow(obj.c, 2) == pow(obj.b, 2)) {
        cout << "Martkutxda samkutxedi";   
    } else {
        cout << "Chveulebrivi samkutxedi";
    }
    
    return 0;
}