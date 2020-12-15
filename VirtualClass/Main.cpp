#include "String.h"

int main()
{
    Numbers nums(5);
    cout << "Print Before Sort:\n";
    nums.print();
    nums.bubbleSort();
    cout << "Print After Sort:\n";
    nums.print();

    String words("Sara", "Rivka", "Rachel", "Leah");
    cout << "Print BeforeSort:\n";
    words.print();
    words.bubbleSort();
    cout << "Print After Sort:\n";
    words.print();
    return 0;
}

/*Output:
Print Before Sort:
0 : 93
1 : 43
2 : 16
3 : 90
4 : 48

Print After Sort:
0 : 16
1 : 43
2 : 48
3 : 90
4 : 93

Print Before Sort:
0 : Sara
1 : Rivka
2 : Rachel
3 : Leah

Print After Sort:
0 : Leah
1 : Rachel
2 : Rivka
3 : Sara
*/