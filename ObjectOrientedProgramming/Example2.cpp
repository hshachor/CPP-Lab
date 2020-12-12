#include <iostream>
using namespace std;

class Rational
{
public:
    int mechane;
    int mone;

    //output
    void print();
    void mult(Rational num);
};

void Rational::print()
{
    cout << mone << "/" << mechane << '\n';
}

void Rational::mult(Rational num)
{
    mone *= num.mone;
    mechane *= num.mechane;
}

int main()
{
    Rational num1, num2;
    num1.mone = 2;
    num1.mechane = 4;

    num2.mone = 3;
    num2.mechane = 6;

    cout << "num1 = "; num1.print();
    cout << "num2 = "; num2.print();

    num1.mult(num2);
    cout << "num1*mum2 = ";
    num1.print();
    return 0;
}
