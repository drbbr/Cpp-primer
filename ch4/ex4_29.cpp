#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x[10];
    int *p = x;
    cout << sizeof(x) << " " << sizeof(*x) << endl;
    cout << sizeof(x) / sizeof(*x) << endl;
    // 40/4=10
    cout << sizeof(p) << " " << sizeof(*p) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;
    // 8/2=4
    // 在32位系统里是 4/4=1
    return 0;
}