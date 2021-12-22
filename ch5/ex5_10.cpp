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
        if (ch == 'a' || ch == 'A')
        {
            aCnt++;
            continue;
        }
        if (ch == 'e' || ch == 'E')
        {
            eCnt++;
            continue;
        }
        if (ch == 'i' || ch == 'I')
        {
            iCnt++;
            continue;
        }
        if (ch == 'o' || ch == 'O')
        {
            oCnt++;
            continue;
        }
        if (ch == 'u' || ch == 'U')
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