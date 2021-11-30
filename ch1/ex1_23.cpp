#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, cur;
    int n = 1;
    if (std::cin >> item)
    {
        while (std::cin >> cur)
        {
            if (item.isbn() == cur.isbn())
            {
                n++;
            }
            else
            {
                std::cout << cur.isbn() << " " << n << std::endl;
                item = cur;
                n = 1;
            }
        }
        std::cout << cur.isbn() << " " << n << std::endl;
    }
    return 0;
}