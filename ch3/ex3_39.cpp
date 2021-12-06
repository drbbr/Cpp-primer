#include <iostream>
#include <string>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1 = "string1";
    string s2 = "string2";
    const char c1[] = "char string 1";
    const char c2[] = "char string 2";
    cout << (s1 == s2) << endl;
    cout << strcmp(c1, c2) << endl;
}