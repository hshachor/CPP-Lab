#include <iostream>
using namespace std;

class Vector
{
private:
    int numbers[10];
public:
    Vector();
    int add();
    void add(int);
    void add(int, int);
    void print() const;
};

Vector::Vector()
{
    cout << "enter 10 numbers\n";
    for (int i = 0; i < 10; i++)
        cin >> numbers[i];
}
int Vector::add()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
        sum += numbers[i];
    return sum;
}

void Vector::add(int number)
{
    for (int i = 0; i < 10; i++)
        numbers[i] += number;
}

void Vector::add(int number, int place)
{
    numbers[place] += number;
}

void Vector::print() const
{
    for (int i = 0; i < 10; i++)
        cout << numbers[i] << ' ';
    cout << endl;
}

int main()
{
    Vector vec; 
    cout << "add(): " << vec.add() << endl; 
    vec.add(3); 
    cout << "add(3): ";     vec.print(); 
    vec.add(2, 5); 
    cout << "add(2,5): ";   vec.print(); 
    return 0;
}





