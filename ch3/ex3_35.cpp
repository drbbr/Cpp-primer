#include <iostream>
using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;

int main()
{
    int nums[5] = {1, 2, 3, 4, 5};
    int *pb = begin(nums);
    int *pe = end(nums);
    for (int i = 0; i < 5; i++)
        cout << nums[i] << " ";
    cout << endl;
    while (pb != pe)
    {
        *pb = 0;
        pb++;
    }
    for (int i = 0; i < 5; i++)
        cout << nums[i] << " ";
    return 0;
}