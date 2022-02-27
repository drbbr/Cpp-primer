#include <iostream>
#include <string>
using std::string;

class Person {
private:
    string name;
    string address;

public:
    const string &getName() const {
        return name;
    }
    const string &getAddress() const {
        return address;
    }
};
