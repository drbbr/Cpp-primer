#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &arrPtr(int i) {
    return (i % 2) ? odd : even;
}

int main() {
    for (auto i : arrPtr(2)) {
        cout << i << " ";
    }
}