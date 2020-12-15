#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void display(vector<int> vec)
{
    for_each(vec.begin(), vec.end(), [](int s) {cout << s << ' '; });
    cout << endl;
}

int main()
{
    vector<int> vec;
    for (int i = 0; i < 10; i++)
        vec.push_back(rand() % 100);
    display(vec);

    sort(vec.begin(), vec.end());
    display(vec);

    sort(vec.begin(), vec.end(), [](int i, int j) {return i > j; });
    display(vec);

    return 0;
}
/*
Output:
41 67 34 0 69 24 78 58 62 64
0 24 34 41 58 62 64 67 69 78
78 69 67 64 62 58 41 34 24 0
*/