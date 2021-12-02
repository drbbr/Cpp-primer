#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    /*
    if (s1 == s2)
        cout << "equals";
    else
    {
        if (s1 > s2)
            cout << s1;
        else
            cout << s2;
    }
    */
    if (s1.size() > s2.size())
    {
        cout << s1;
    }
    else if (s1.size() < s2.size())
        cout << s2;
    else
        cout << "equals";
    return 0;
}