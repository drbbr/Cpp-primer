#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string s;
    vector<string> res;
    while (cin >> s)
    {
        for (auto &c : s)
            c = toupper(c);
        res.push_back(s);
    }
    for (auto a : res)
        cout << a << endl;
    return 0;
}