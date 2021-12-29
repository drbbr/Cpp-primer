#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int getabs(int val) {
  if (val < 0)
    return -val;
  return val;
}
int main() {
  int val;
  cout << getabs(-8);
}