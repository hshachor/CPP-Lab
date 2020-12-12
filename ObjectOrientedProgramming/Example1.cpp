#include <iostream>
using namespace std;

class Rational
{
public:
    int mechane;
    int mone;

    //output
    void print()
    {
        cout << mone << '/' << mechane << '\n';
    }
};

int main()
{
    Rational num1, num2;
    num1.mone = 2;
    num1.mechane = 4;

    num2.mone = 3;
    num2.mechane = 6;

    num1.print();
    num2.print();

    return 0;
}
