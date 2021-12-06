#include <iostream>
#include <vector>
using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::vector;

bool com_arr(int *n1b, int *n1e, int *n2b, int *n2e)
{
    while (n1b != n1e && n2b != n2e)
    {
        if (*n1b != *n2b)
            return false;
        n1b++;
        n2b++;
    }
    if (n1b != n1e && n2b != n2e)
        return false;
    return true;
}

bool com_vec(vector<int> v1, vector<int> v2)
{
    return v1 == v2;
}

int main()
{
    int n1[5] = {0, 1, 2, 3, 4};
    int n2[5] = {0, 1, 2, 3, 4};
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {5, 4, 3, 2, 1};
    cout << com_arr(begin(n1), end(n1), begin(n2), end(n2));
    cout << com_vec(v1, v2);
}