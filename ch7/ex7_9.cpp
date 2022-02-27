#include <iostream>
#include <istream>
#include <ostream>
#include <string>
using std::string;

class Person {
    string name;
    string address;

public:
    const string &getName() const {
        return name;
    }
    const string &getAddress() const {
        return address;
    }
    std::istream &read(std::istream &is, Person &p);
};

std::ostream &print(std::ostream &os, const Person &p) {
    os << "name: " << p.getName() << " address: " << p.getAddress() << std::endl;
    return os;
}
std::istream &Person::read(std::istream &is, Person &p) {
    is >> p.name >> p.address;
    return is;
}
