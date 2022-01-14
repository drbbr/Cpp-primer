#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

bool str_subrange(const string &str1, const string &str2) {
    if (str1.size() == str2.size())
        return str1 == str2;
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i]) {
            return;
            /*
                error: return-statement with no value, in function returning ‘bool’ [-fpermissive]
   14 |             return;
            */
        }
    }
}

int main() {
    str_subrange("12312", "31231");
}