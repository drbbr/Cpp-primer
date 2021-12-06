#include <iostream>
#include <string>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const char c1[] = "hello";
    const char c2[] = "world!";
    char c3[20];
    strcpy(c3, c1);
    strcat(c3, " ");
    strcat(c3, c2);
    cout << c3 << endl;
}