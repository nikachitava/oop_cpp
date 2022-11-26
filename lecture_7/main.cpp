#include <iostream>

using namespace std;

// int max(int a, int b) {
//     if(a > b) return a;
//     else return b;
// }

// double max(double a, double b) {
//     if(a > b) return a;
//     else return b;
// }

// float max(float a, float b) {
//     if(a > b) return a;
//     else return b;
// }

template <typename T>
T Max(T a, T b) {
    if(a > b) return a;
    else return b;
}

int main() {
    cout << Max<int>(2, 3);

    return 0;
}