#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void cal(int parameter) {
    static int sp = 0;
    cout << "local static variable: " << sp << endl;
    cout << "parameter: " << parameter << endl;
    sp++;
}

int main() {
    int arguments = 4;
    for (int i = 0; i < 3; i++) // i is local variable
        cal(i);
}