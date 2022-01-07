#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int compare(const int a, const int *b)
{
    return a>(*b)?a:(*b);
}

int main() {
    int x=4,y=5;
    cout<<compare(x,&y);
}