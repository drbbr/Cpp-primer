#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main()
{
    string s;
    vector<string> ans;
    while (cin >> s)
    {
        ans.push_back(s);
    }

    return 0;
}