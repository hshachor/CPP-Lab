// all_of example
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

bool divBy3(int i)
{
    return i % 3 == 0;
}

int main()
{
    array<int, 8> A = { 3, 21, 33, 9, 15, 27, 39, 45 };
    if (all_of(A.begin(), A.end(), divBy3))
        cout << "all numbers divid by 3.\n";

    if (all_of(A.begin(), A.end(), [](int i) {return i % 2; }))
        cout << "odd numbers only.\n";

    return 0;
}