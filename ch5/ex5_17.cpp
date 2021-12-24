#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> v1 = {0, 1, 1, 2};
  vector<int> v2 = {0, 1, 1, 2, 3};
  int s = v1.size() < v2.size() ? v1.size() : v2.size();
  int i = 0, j = 0;

  while (i < s && j < s) {
    if (v1[i] != v2[j]) {
      cout << "false" << endl;
      return 0;
    }
    ++i;
    ++j;
  }
  cout << "true" << endl;
  return 0;
}