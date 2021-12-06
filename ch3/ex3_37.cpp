#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::string;
using std::vector;

int main()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;

    while (*cp)
    {
        cout << *cp << endl;
        cp++;
    }
}