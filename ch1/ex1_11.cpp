#include <iostream>

int main()
{
    int left, right;
    std::cout << "Please enter left num and right num:" << std::endl;
    std::cin >> left >> right;
    int val = left;
    while (val <= right)
    {
        std::cout << val << std::endl;
        val++;
    }

    return 0;
}