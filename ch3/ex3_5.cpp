#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string ans, s;
    while (cin >> s)
    {
        //ans += s;
        ans += s + ' ';
    }
    cout << ans;
    return 0;
}