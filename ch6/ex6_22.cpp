#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void change(int &a,int &b)
{ 
    int t=a;
    a=b;
    b=t;
}

int main() {
    int x=4,y=5;
    cout<<x<<" "<<y<<endl;
    change(x,y);
    cout<<x<<" "<<y<<endl;
}