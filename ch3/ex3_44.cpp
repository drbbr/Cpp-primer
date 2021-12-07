#include <iostream>
#include <vector>
using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::vector;
using int_4carray = int (&)[4];
using int_4parray = int (*)[4];
//typedef int(*)[4] int_4parray;

int main()
{
    int x = 0;
    int ia[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            ia[i][j] = x++;
    }

    //1 范围for

    for (int_4carray i : ia)
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    //2 下标
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
            cout << ia[i][j] << " ";
        cout << endl;
    }

    //3 指针
    for (int_4parray i = ia; i != ia + 3; i++)
    {
        for (int *j = *i; j != *i + 4; j++)
        {
            cout << *j << " ";
        }
        cout << endl;
    }
    return 0;
}