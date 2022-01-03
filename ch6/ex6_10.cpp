#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void exch(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x;
}

int main() {
    int a = 1, b = 2;
    cout << "a = " << a << " b = " << b << endl;
    exch(&a, &b);
    cout << "after:\n"
         << "a = " << a << " b = " << b << endl;
}