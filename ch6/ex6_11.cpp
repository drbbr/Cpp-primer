#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void reset(int& val)
{ 
    val=0;
}

int main() {
    int val=11;
    cout<<"before: "<<val<<endl;
    reset(val);
    cout<<"after: "<<val<<endl;
}