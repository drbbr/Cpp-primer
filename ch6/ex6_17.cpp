#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

bool isBig(const string& s)
{
    for (char c : s) 
        if (isupper(c))
            return true;
    return false;
}
void toSmall(string& s)
{
    for (char &c : s) 
        if (isupper(c))
            c = tolower(c);
}
int main() {
    string s1="is A STRING";
    string s2="is a string";
    cout<<s1<<endl<<isBig(s1)<<" ";
    toSmall(s1);
    cout<<s1<<endl;

    cout<<s2<<endl<<isBig(s2)<<" ";
    toSmall(s2);
    cout<<s2<<endl;
}