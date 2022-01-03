#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int getx() {
    static int x = 0;
    return x++;
}

int main() {
    for (int i = 0; i < 10; i++) {
        cout << getx() << endl;
    }
}