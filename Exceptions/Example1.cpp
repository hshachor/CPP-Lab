#include<iostream>
using namespace std;

int main()
{
    int numerator = 10;
    int denominator = 0;
    int div = numerator / denominator;
    cout << "This text will not be printed.";
    return 0;
}
/*
!!! Anunhandled exception of type 'System.DivideByZeroException' occurred in exceptions.exe
*/