#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> nums(10);
    int n;
    for (auto &i : nums)
    {
        cin >> i;
    }
    for (auto x = nums.begin(); x != nums.end(); x++)
    {
        *x = 2 * (*x);
        cout << *x << " ";
    }
    return 0;
}