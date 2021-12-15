#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 42)
            break;
    }
    cout << "over";
    return 0;
}