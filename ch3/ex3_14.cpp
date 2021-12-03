#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main()
{
    int n;
    vector<int> ans;
    while (cin >> n)
    {
        ans.push_back(n);
    }

    return 0;
}