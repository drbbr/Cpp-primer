#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x = 0, y = 0;
    cout << (true ? ++x, ++y : --x, --y) << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    return 0;
}