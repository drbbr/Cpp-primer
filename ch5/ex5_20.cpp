#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s, sample;
  bool flag = false;
  while (cin >> s) {
    if (s == sample) {
      flag = true;
      break;
    }
    sample = s;
  }
  if (flag)
    cout << "the repeat string is:  " << sample << endl;
  else
    cout << "No repeat string\n";
}