#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv)
{
    if(argc < 2) 
        cout<<"need two arg\n";
    string s;
    s += argv[1];
    s += argv[2];
    cout<<s<<endl;
}