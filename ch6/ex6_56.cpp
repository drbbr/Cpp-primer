#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int divi(int a, int b) {
    return a / b;
}
int main() {
    vector<decltype(add) *> vf;
    vf.push_back(add);
    vf.push_back(sub);
    vf.push_back(mul);
    vf.push_back(divi);
    for (int i = 0; i < 4; i++) {
        cout << i << " " << vf[i](6, 3) << endl;
    }
}
