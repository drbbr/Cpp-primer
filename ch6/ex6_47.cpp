#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void rpvector(vector<int> &v, int i) {
    if (i == v.size())
        return;
    #ifndef NDEBUG
        cout << "The vec size is : " << v.size() << endl;
    #endif
    cout << v[i] << endl;
    
    rpvector(v, i + 1);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    rpvector(v, 0);
}
