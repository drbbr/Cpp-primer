#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string s = "dddd qqqqq";
    cout << s << std::endl;
    for (char &x : s)
    {
        x = 'X';
    }
    cout << s;
    //ζ δΊεη
}