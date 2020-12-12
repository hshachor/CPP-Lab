#include <iostream>
#include <ctime>
using std::cout;

class Vector
{
private:
    int* numbers;
    int size;
public:
    Vector(int sizeVec = 10);
    Vector(int val, int sizeVec);
    Vector(int* vec, int sizeVec = 10);
    Vector(const Vector&);
    ~Vector();
    void print() const;
};

Vector::Vector(int sizeVec)
{
    size = sizeVec;
    numbers = new int[size];
    srand((unsigned)time(nullptr));
    for (int i = 0; i < size; i++)
        numbers[i] = rand() % 100;
}
Vector::Vector(int val, int sizeVec)
{
    size = sizeVec;
    numbers = new int[size];
    for (int i = 0; i < size; i++)
        numbers[i] = val;
}
Vector::Vector(int* vec, int sizeVec)
{
    size = sizeVec;
    numbers = new int[size];
    for (int i = 0; i < size; i++)
        numbers[i] = vec[i];
}

Vector::Vector(const Vector& V)
{
    size = V.size;
    numbers = new int[size];
    for (int i = 0; i < size; i++)
        numbers[i] = V.numbers[i];

}

Vector::~Vector()
{
    if (size)
        delete[] numbers;
}
void Vector::print() const
{
    for (int i = 0; i < size; i++)
        cout << numbers[i] << ' ';
}

int main()
{
    int nums[10];
    for (int i = 0; i < 10; i++)
        nums[i] = i;
    Vector vec1, vec2(6), vec3(4, 8), vec4(nums), vec5(vec3);
    cout << "vec1: ";   vec1.print();
    cout << "\nvec2: "; vec2.print();
    cout << "\nvec3: "; vec3.print();
    cout << "\nvec4: "; vec4.print();
    cout << "\nvec5: "; vec5.print();
}