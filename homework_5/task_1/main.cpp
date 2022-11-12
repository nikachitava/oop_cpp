// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

void numbers(float a, float b, float c) { 
    float arr[] = {a, b, c};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
}


int main () {

    numbers(5, 4, 3);

    return 0;
}