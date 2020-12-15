#include <iostream>
using namespace std;

int main()
{
    int x = 2345;
    int z = [x]() mutable {
        int sum = 0;
        while (x) {
            x /= 10;
            sum++;
        }
        return sum;
    }();

    cout << "x=" << x << endl;
    cout << "z=" << z << endl;
    return 0;
}