#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<string> svec;
  string s;
  int i, maxtime;
  while (cin >> s)
    svec.push_back(s);
  s = svec[0];
  i = 1;
  maxtime = 1;
  for (int j = 1; j < svec.size(); j++) {
    if (svec[j] == s) {
      i++;
      maxtime = maxtime > i ? maxtime : i;
      continue;
    }
    i = 1;
    s = svec[j];
  }
  cout << s << " " << maxtime << endl;
}