#include <bits/stdc++.h>

using namespace std;

class university {
protected:
    string name = "";
    string address = "";
    int phone_number;
    int ID;
public:
    university(string, string, int, int);
    void print();
    void set(string, string, int, int);

};

class faculty : public university {
private:
    string f_name;
    int f_number;
public:
    faculty(string, int);
    void print();
    void set(string, int);
};

university::university(string name, string address, int phone_number, int ID) {
    this -> name = name;
    this -> address = address;
    this -> phone_number = phone_number;
    this -> ID = ID;
}

void university::set(string name, string address, int phone_number, int ID) {
    this -> name = name;
    this -> address = address;
    this -> phone_number = phone_number;
    this -> ID = ID;
}

faculty::faculty(string f_name, int f_number) : university(name, address, phone_number, ID) {
    this -> f_name = f_name;
    this -> f_number = f_number;
}

void faculty::set(string f_name, int f_number) {
    this -> f_name = f_name;
    this -> f_number = f_number;
}

void university::print() {
    cout << "NAME: " << name << "\t" << " Address: " << address << "\t" << " Phone number: " << phone_number << "\t" << 
    " ID: " << ID << "\n";
}

void faculty::print() {
    cout << "Faculty name: " << f_name << "\t" << "Faculty number: " << f_number << endl;
}

int main() {
    university uni("EU", "Guramishvili st.", 551123123, 171);
    faculty fac("IT", 10);

    uni.print();
    cout << "-------------------" << endl;
    fac.print();

    return 0;
}