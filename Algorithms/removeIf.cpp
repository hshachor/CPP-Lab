// remove_if & remove_copy example
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int myints[] = { 9,20,35,30,20,12,10,20 };
    int* pbegin = myints;
    int* pend = myints + 8;

    pend = remove_if(pbegin, pend, [](int x) {return x % 3 == 0; });

    cout << "range contains:";
    for (int* p = pbegin; p != pend; ++p)
        cout << ' ' << *p;
    cout << endl;

    vector<int> myvector(pend - pbegin);
    remove_copy(myints, myints + (pend - pbegin), myvector.begin(), 20);

    cout << "myvector contains:";
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
    return 0;
}