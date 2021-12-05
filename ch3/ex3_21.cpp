#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void print_vector_int(vector<int> v)
{
    for (auto n = v.cbegin(); n != v.cend(); n++)
        cout << *n << " ";
    cout << endl;
}
void print_vector_str(vector<string> v)
{
    for (auto s = v.cbegin(); s != v.cend(); s++)
        cout << *s << " ";
    cout << endl;
}
int main()
{
    vector<int> v1;              // 空
    vector<int> v2(10);          // 10个0
    vector<int> v3(10, 42);      // 10个42
    vector<int> v4{10};          // 1个10
    vector<int> v5{10, 42};      // 10, 42
    vector<string> v6{10};       // 10个""
    vector<string> v7{10, "hi"}; // 10个"hi"

    print_vector_int(v1);
    print_vector_int(v2);
    print_vector_int(v3);
    print_vector_int(v4);
    print_vector_int(v5);
    print_vector_str(v6);
    print_vector_str(v7);

    return 0;
}