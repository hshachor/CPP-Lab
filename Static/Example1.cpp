#include <iostream>
using namespace std;

void showStaticValue(int n)
{
	static int value = 0;
	value+= n;
	cout << "Static value is " << value << endl;
}

int main()
{
	for (int i = 0; i < 5; i++)
		showStaticValue(i);
	return 0;
}

//Output:
//Static value is 0
//Static value is 1
//Static value is 3
//Static value is 6
//Static value is 10