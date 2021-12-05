#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> nums;
    int n;
    while (cin >> n)
        nums.push_back(n);
    /*
    for (int i = 1; i < nums.size(); i++)
        cout << nums[i] + nums[i - 1] << " ";
    cout << endl;
    for (int i = 0; i < nums.size() / 2; i++)
        cout << nums[i] + nums[nums.size() - 1 - i] << " ";
    */
    for (auto i = nums.begin() + 1; i != nums.end(); i++)
    {
        cout << (*i) + *(i - 1) << " ";
    }
    cout << endl;
    for (auto i = nums.begin(); i != nums.begin() + (nums.size() / 2); i++)
    {
        cout << *i + *(nums.end() - (i - nums.begin() + 1)) << " ";
    }
    return 0;
}