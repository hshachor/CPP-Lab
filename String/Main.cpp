#include <iostream>
#include "MyString.h"

using std::cout;
using std::endl;

int main()
{
    MyString s1("Hello");
    MyString s2("people");
    MyString s3 = s1 + s2;
    if (s1 == s2)
        cout << "equal" << endl;
    s1.print();
    cout << " ";
    s2.print();
    cout << endl;
}
