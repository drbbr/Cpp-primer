#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::initializer_list;
void cal(initializer_list<int> il) {
    int sum = 0;
    for (auto i : il) {
        sum += i;
    }
    cout << "sum = " << sum;
}
int main() {
    initializer_list<int> il = {0, 1, 2, 3, 4};
    cal(il);
}