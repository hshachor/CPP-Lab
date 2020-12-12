#include <iostream>
using namespace std;

class Rational
{
public:
    int mone;
    int mechane;

    //constructor
    Rational(int myMone, int myMechane);

    //output
    void print() { cout << mone << "/" << mechane << '\n'; }
};

Rational::Rational(int myMone, int myMechane)
{
    mone = myMone;
    mechane = myMechane;
}

int main() {
    Rational num1(1, 2),
        num2(3, 4),
        num3(5, 6);

    num1.print();
    num2.print();
    num3.print();

    return 0;
}