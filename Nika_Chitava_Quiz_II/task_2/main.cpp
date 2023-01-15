#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int classes;
    cout << "How many class?: ";
    cin >> classes;

    int studentInClass;

    for(int i = 0; i < classes; i++) {
        cout << "How many student is in class?: ";
        cin >> studentInClass;

        int studentMarks[studentInClass];
        int max_point, min_point, gap = 0;

        max_point = studentMarks[0];
        min_point = studentMarks[0];

        for(int j = 0; j < studentInClass; j++) {
            cout << "Enter student mark: ";
            cin >> studentMarks[j];

            if(max_point < studentMarks[j]) {
                max_point = studentMarks[j];
            }

            if(min_point > studentMarks[j]) {
                min_point = studentMarks[j];
            }
        }
        sort(studentMarks, studentMarks + studentInClass);

        for (int k = 1; k < studentInClass; k++) {
            gap = max(gap, studentMarks[k] - studentMarks[k-1]);
        }

        cout << "Class " << i+1 << endl; 
        cout << "Max " << max_point << ", Min " << min_point << ", Largest gap " << gap << endl; 
    }
    return 0;
}
