// any_of example
#include <iostream>     // std::cout
#include <algorithm>    // std::any_of
#include <array>        // std::array

using namespace std;

int main()
{
    array<int, 7> A = { 0, 1, -1, 3, -3, 5, -5 };
    if (any_of(A.begin(), A.end(), 
        [](int i) {return i < 0; }))
        cout << "array includes negative elements\n";
    return 0;
}