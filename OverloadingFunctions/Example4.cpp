#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    //default constructor
    Point(int X = 0, int Y = 0);
    //copy constructor
    Point(const Point& p);
    int getX() const { return x; }
    int getY() const { return y; }
    void print();
};

Point::Point(int X, int Y) :x(X), y(Y)
{ }

Point::Point(const Point& p)
{
    x = p.getX();
    y = p.getY();
}

void Point::print()
{
    cout << '(' << x << ',' << y << ")\n";
}

int main()
{
    Point p1,
        p2(2, 8),
        p3(p2);
    cout << "p1: ";	 p1.print();
    cout << "p2: ";	 p2.print();
    cout << "p3: ";  p3.print();
}
