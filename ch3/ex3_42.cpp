#include <iostream>
#include <vector>
using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::vector;

int main()
{
    vector<int> v1{0, 1, 2, 3, 4};
    int ns[5];
    for (int i = 0; i < 5; i++)
        ns[i] = v1[i];
    for (auto i : ns)
        cout << i << " ";
    return 0;
}