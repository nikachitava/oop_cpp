#include <iostream>
#include <vector>
#include <random>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int num;
    cin >> num;

    vector<int> luwebi;
    vector<int> kentebi;

    for (int i = 0; i < num; i++) {
        int randomNumber = rand() % 201 - 100; //101
        if (randomNumber & 1) {
            kentebi.push_back(randomNumber);
        }
        else {
            luwebi.push_back(randomNumber);
        };
    }

    for (int i = 0; i < luwebi.size(); i++) {
        cout << luwebi[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < kentebi.size(); i++) {
        cout << kentebi[i] << " ";
    }

}
