// remove algorithm example
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int myints[] = { 10,20,30,30,20,10,10,20 };
    // bounds of range:
    int* pbegin = myints;
    int* pend = myints + 8;
    pend = remove(pbegin, pend, 20);

    cout << "range contains:";
    for (int* p = pbegin; p != pend; ++p)
        cout << ' ' << *p;
    return 0;
}