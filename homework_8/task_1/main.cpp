#include <iostream>

using namespace std;

/* Task 1 */
template <typename T>
void positiveNumbers(T arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0) {
            cout << "Positive:" << arr[i] << endl;
        }
    }
}

/* Task 2 */
template <typename T>
int countNegativeNumbers(T arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            count ++;
        }
    }
    return count;
}

/* Task 3 */ 
template <typename T>
int sumEvenIndex(T arr[], int size) {
    int sum = 0;
    for(int i = 2; i < size; i+=2) {
        sum+= arr[i];
    }
    return sum;
}



int main() {
    cout << "________ Task 1 ________" << endl;

    int masivi[9] = {54, -23, 0, 1, -2, -432, 213, 3, 8};
    positiveNumbers(masivi, sizeof(masivi)/sizeof(masivi[0]));
     
    cout << "________ Task 2 ________" << endl;

    cout << "Am masivshi aris: " << countNegativeNumbers(masivi, sizeof(masivi)/sizeof(masivi[0])) << " uaryofiti ricxvi." << endl;
    
    cout << "________ Task 3 ________" << endl;

    cout << "Masivis luw indeqsze cifrebis jami: " << sumEvenIndex(masivi, sizeof(masivi)/sizeof(masivi[0])) << endl;
    return 0;
}