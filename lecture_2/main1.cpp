#include <iostream>
#include <cmath>

using namespace std;

class triangle
{
public:
    float a, b, c;
    float get_P();
    float get_S();

    bool isTriangle();
};

float triangle::get_S()
{
    if (isTriangle())
    {
        float p = get_P() / 2;
        float s = p * (p - a) * (p - b) * (p - c);
        return sqrt(s);
    }
    else
    {
        return -1;
    }
}

bool triangle::isTriangle()
{
    return (a + b > c && b + c > a && c + a > b);
}

float triangle::get_P() {
    if (isTriangle())
    {
        return a + b + c;
    }
    else
    {
        return -1;
    }
}

int main()
{

    triangle obj1;

    cin >> obj1.a >> obj1.b >> obj1.c;

    cout << "P = " << obj1.get_P() << endl;
    cout << "S = " << obj1.get_S() << endl;

    return 0;
}