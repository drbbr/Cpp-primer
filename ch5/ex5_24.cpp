#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;
int main() {
  int i, j;
  cin >> i >> j;
  if (j == 0)
    throw runtime_error("divisor is 0");
  cout << i / j << endl;
}