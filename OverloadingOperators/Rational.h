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
    void operator*=(Rational);
    Rational operator*(Rational);
    Rational operator+(Rational);
    Rational operator-(Rational);
    Rational operator/(Rational);
    bool operator==(const Rational&) const;
    Rational& operator=(const Rational&);
    Rational Rational::operator++();
    Rational Rational::operator++(int);
    Rational Rational::operator--();
    Rational Rational::operator--(int);

    //output
    void print() const
    {
        cout << mone << '/' << mechane << endl;
    }
};
