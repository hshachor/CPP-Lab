#include <iostream>
using namespace std;

class Rational {
private:
    int mone;
    int mechane;
public:

    //constructor
    Rational(int Mone = 1, int Mechane = 1) :
        mone(Mone), mechane(Mechane) {}
    Rational(const Rational& num) :
        mone(num.getMone()), mechane(num.getMechane()) {}

    //modify functions
    void setMone(int Mone) { mone = Mone; }
    void setMechane(int Mechane) { mechane = Mechane; }

    //view functions
    int getMone() const { return mone; }
    int getMechane() const { return mechane; }

    //operations
    Rational operator+(Rational);
    Rational operator-(Rational);
    Rational operator*(Rational);
    Rational operator/(Rational);
    Rational& operator=(const Rational&);
    bool operator==(Rational);

    friend Rational operator *(Rational, int);
    friend Rational operator *(int, Rational);

    //input/output
    friend ostream& operator<<(ostream& os, Rational num);
    friend istream& operator>>(istream& is, Rational& num);

};
