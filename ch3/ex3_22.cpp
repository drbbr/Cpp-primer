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
    vector<string> text;
    string s;
    while (getline(cin, s))
    {
        text.push_back(s);
    }
    for (auto it = text.begin(); it != text.end() && !it->empty(); it++)
    {
        for (auto cit = it->begin(); cit != it->end(); cit++)
        {
            if (isalpha(*cit))
                *cit = toupper(*cit);
        }
        cout << *it;
    }
    return 0;
}