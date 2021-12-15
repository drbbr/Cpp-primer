#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin >> n;
    if (n % 2)
        cout << n << "是奇数。" << endl;
    else
        cout << n << "是偶数。" << endl;
    return 0;
}