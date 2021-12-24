#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
  int ffCnt = 0, flCnt = 0, fiCnt = 0;
  char ch;
  while (cin >> ch) {
    if (ch == 'f') {
      cin >> ch;
      if (ch == 'i') {
        fiCnt++;
      }
      if (ch == 'f') {
        ffCnt++;
      }
      if (ch == 'l') {
        flCnt++;
      }
      continue;
    }
    if (ch == 'a' || ch == 'A') {
      aCnt++;
      continue;
    }
    if (ch == 'e' || ch == 'E') {
      eCnt++;
      continue;
    }
    if (ch == 'i' || ch == 'I') {
      iCnt++;
      continue;
    }
    if (ch == 'o' || ch == 'O') {
      oCnt++;
      continue;
    }
    if (ch == 'u' || ch == 'U') {
      uCnt++;
      continue;
    }
  }
  cout << "count of 'a': " << aCnt << endl;
  cout << "count of 'e': " << eCnt << endl;
  cout << "count of 'i': " << iCnt << endl;
  cout << "count of 'o': " << oCnt << endl;
  cout << "count of 'u': " << uCnt << endl;
  cout << "count of 'ff': " << ffCnt << endl;
  cout << "count of 'fl': " << flCnt << endl;
  cout << "count of 'fi': " << fiCnt << endl;
  return 0;
}