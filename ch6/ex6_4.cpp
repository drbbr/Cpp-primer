#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fact(int val) {
  int ret = 1;
  while (val > 1) {
    ret *= val;
    --val;
  }
  return ret;
}

int main() {
  int val;
  cout << "please enter a number:\n";
  cin >> val;
  cout << fact(val) << endl;
}