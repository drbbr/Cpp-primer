#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    int n1[10];
    for (int i = 0; i < 10; i++)
        n1[i] = i;
    int n2[10];
    for (int i = 0; i < 10; i++)
        n2[i] = n1[i];
    for (auto i : n2)
        cout << i << " ";
    cout << endl;

    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    vector<int> v2 = v1;
    for (auto i : v2)
        cout << i << " ";
    return 0;
}