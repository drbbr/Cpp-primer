#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(const int i)
{
    cout<<i<<endl;
}

void print(const int *j,size_t s)
{
    for(auto i=0;i<s;i++)
    {
        cout<<*(j+i)<<endl;
    }
}

int main() {
    int i=0,j[2]={0,1};
    print(i);
    print(j, end(j) - begin(j));

}