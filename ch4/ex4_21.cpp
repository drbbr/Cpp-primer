#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    for (auto i : nums)
        cout << i << " ";
    cout << endl;
    for (auto &i : nums)
    {
        i = (i % 2) ? i * 2 : i;
        cout << i << " ";
    }
    cout << endl;
    return 0;
}