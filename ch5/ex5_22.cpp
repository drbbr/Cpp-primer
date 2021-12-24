#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int get_size() { return 1024; }

int main() {
  int sz;
  while ((sz = get_size()) <= 0)
    ;
  return 0;
}