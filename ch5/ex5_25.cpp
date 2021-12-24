#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;
int main() {
  int i, j;
  while (cin >> i >> j) {
    try {
      if (j == 0)
        throw runtime_error("divisor is 0");
      cout << i / j << endl;
    } catch (runtime_error err) {
      cout << err.what() << "\nTry again? Enter y or n\n";
      char c;
      cin >> c;
      if (!cin || c == 'n')
        break;
    }
  }
}