// min example
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    cout << "min(1,2)==";
    cout << min(1, 2) << '\n';
    cout << "min(2,1)==";
    cout << std::min(2, 1) << '\n';
    cout << "min('a','z')==";
    cout << std::min('a', 'z') << '\n';
    cout << "min(3.14,2.72)==";
    cout << min(3.14, 2.72) << '\n';
    return 0;
}