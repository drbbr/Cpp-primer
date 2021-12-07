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
    int ns[] = {0, 1, 2, 3, 4};
    vector<int> v1(begin(ns), end(ns));
    for (auto i : v1)
        cout << i << " ";
    return 0;
}