#include <iostream> 
#include "Student.h" 
using namespace std;

int main()
{
    Student me;
    // me.grade=3;
    //ERROR: cannot access private member

    me.setGrade();
    // cout<<me.grade;
    //ERROR: cannot access private member

    cout << me.getGrade() << endl;

    me.setMarks();
    me.setAverage();
    cout << me.getAverage();

    return 0;
}