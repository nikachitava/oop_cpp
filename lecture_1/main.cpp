#include <iostream>

using namespace std;


int main() {

   /* int a, b; 
    cin >> a >> b;

    int c;

    c = a; 
    a = b;
    b = c;

    cout << a << endl;
    cout << b << endl; */

   /* int a, b; // 2 4
    cin >> a >> b;

    a = a + b; // 
    b = a - b; // 
    a = a - b; */ 

    /* int n, m, k = 0;
    m = n;

    while(n) {
        k = k*10 + n % 10;
        n = n / 10;
    }

    if(m == k) {
        cout << "Yes";
    } else {
        cout << "no";
    } */

    unsigned long long a;
    cin >> a;

    do {
        cout << a % 10;
        a /= 10;
    } while(a);

    // 12321










    return 0;
}

/*



*/