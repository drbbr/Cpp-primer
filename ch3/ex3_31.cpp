#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int nums[10];
    for (int i = 0; i < 10; i++)
        nums[i] = i;
    for (auto i : nums)
        cout << i << " ";
    return 0;
}