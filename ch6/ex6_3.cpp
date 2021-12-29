#include <iostream>

int fact(int val) {
  int ret = 1;
  while (val > 1) {
    ret *= val;
    --val;
  }
  return ret;
}

int main() { std::cout << fact(30); }
