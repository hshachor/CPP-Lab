// count/countif algorithm example
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd(int i)
{
    return ((i % 2) == 1);
}

int main()
{
    // counting elements in array:
    int myints[] = { 5,10,15,20,15,10,5,10 };   // 8 elements
    int mycount = count(myints, myints + 8, 10);
    cout << "10 appears " << mycount << " times.\n";

    // counting elements in container:
    vector<int> myvector(myints, myints + 8);
    mycount = count(myvector.begin(), myvector.end(), 20);
    cout << "20 appears " << mycount << " times.\n";

    mycount = count_if(myvector.begin(), myvector.end(), IsOdd);
    cout << "myvector contains " << mycount << " odd values.";
    return 0;
}