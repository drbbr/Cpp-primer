#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    int sCnt = 0, tCnt = 0, nCnt = 0;
    char ch;
    while (cin >> std::noskipws >> ch) //std::noskipws 不忽略空白字符
    {
        if (ch == ' ')
        {
            sCnt++;
            continue;
        }
        if (ch == '\t')
        {
            tCnt++;
            continue;
        }
        if (ch == '\n')
        {
            nCnt++;
            continue;
        }
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
    cout << "count of 'space': " << sCnt << endl;
    cout << "count of '\\n': " << nCnt << endl;
    cout << "count of '\\t': " << tCnt << endl;
    return 0;
}