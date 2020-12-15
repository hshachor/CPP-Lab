#include <iostream>
using namespace std;

int main()
{
    int x;
    [&x](int y) {x = y * y; }(4);
    cout << x;
    return 0;
}