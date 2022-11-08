#include <iostream>
#include <string>

using namespace std;

class University {
public:
    string university = "";
    string faculty = "";
    void printUni();
};

void University::printUni() {
    cout << "University: " << university << " Faculty: " << faculty << endl;
}

class Student : public University {
public:
    string Name = "";
    string Surname = "";
    void printStud();
};

void Student::printStud() {
    cout << "University: " << university << "\nFaculty: " << faculty 
    << "\nName: " << Name << "\nSurname: " << Surname << endl;
}

int main() {    
    University uni;
    uni.university = "SEU";
    uni.faculty = "Tourism";

    Student stud1;
    stud1.university = "EU";
    stud1.faculty = "IT";
    stud1.Name = "Nika";
    stud1.Surname = "Chitava";
    stud1.printStud();


    return 0;
}