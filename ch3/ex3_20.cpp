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
    for (int i = 1; i < nums.size(); i++)
        cout << nums[i] + nums[i - 1] << " ";
    cout << endl;
    for (int i = 0; i < nums.size() / 2; i++)
        cout << nums[i] + nums[nums.size() - 1 - i] << " ";
    return 0;
}