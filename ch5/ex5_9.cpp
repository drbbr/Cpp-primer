#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while (cin >> ch)
    {
        if (ch == 'a')
        {
            aCnt++;
            continue;
        }
        if (ch == 'e')
        {
            eCnt++;
            continue;
        }
        if (ch == 'i')
        {
            iCnt++;
            continue;
        }
        if (ch == 'o')
        {
            oCnt++;
            continue;
        }
        if (ch == 'u')
        {
            uCnt++;
            continue;
        }
    }
    cout << "count of 'a': " << aCnt << endl;
    cout << "count of 'e': " << eCnt << endl;
    cout << "count of 'i': " << iCnt << endl;
    cout << "count of 'o': " << oCnt << endl;
    cout << "count of 'u': " << uCnt << endl;
    return 0;
}