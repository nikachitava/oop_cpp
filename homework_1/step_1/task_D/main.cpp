#include <iostream>

using namespace std;

int main() {

    float a, b;
    cin >> a >> b;

    float sum;
    sum = ((a + b) / 2) * (b-a+1);
    cout << int(sum);
    
    return 0;
}