#include <iostream>
#include <algorithm>

using namespace std;

void sortNumbers(int &x, int &y, int &z) {
    int temp[3] = {x, y, z};
    sort(temp, temp+3);
    x = temp[0];
    y = temp[1];
    z = temp[2];
}

int main() {
    int a = 1232, b = 394, c = 43;
    
    sortNumbers(a, b, c);
    
    cout << a << " " << b << " " << c << endl;
    
    return 0;
}

