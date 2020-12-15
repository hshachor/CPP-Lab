#include "StackList.h"
#include "StackVector.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    try {
        Stack* st;
        char base[7];
        cout << "Do you want a list base or a vector base?";
        cin >> base;
        if (!strcmp(base, "vector"))
            st = new StackVector(20);
        else
            st = new StackList();
        for (int i = 0; i < 20; i++)
            st->push(i);
        while (!st->isEmpty())
            cout << st->pop() << " ";
    }
    catch (char* str) {
        cout << str;
    }
    return 0;
}