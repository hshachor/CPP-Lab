#include <iostream>
using namespace std;

int main() 
{
    int x = [](int y) {return y * y; }(4);
    cout << x;
    return 0;
}