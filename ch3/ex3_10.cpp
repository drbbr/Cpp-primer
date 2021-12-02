#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    getline(cin, s);
    for (auto c : s)
    {
        if (!ispunct(c))
            cout << c;
    }
    return 0;
}