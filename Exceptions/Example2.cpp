#include <iostream>
using namespace std;

int main()
{
    try {
        throw 20;
    }
    catch (int e) {
        cout << "Exception # " << e << " occurred";
    }
    return 0;
}