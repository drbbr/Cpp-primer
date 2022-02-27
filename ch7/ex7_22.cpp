#include <iostream>
#include <istream>
#include <ostream>
#include <string>
using std::string;

class Person {
    friend std::istream &read(std::istream &is, Person &p);
    friend std::ostream &print(std::ostream &os, const Person &p);

public:
    Person() = default;
    Person(const string &n, const string &a) :
        name(n), address(a) {
    }
    Person(std::istream &is) {
        read(std::cin, *this);
    }
    const string &getName() const {
        return name;
    }
    const string &getAddress() const {
        return address;
    }

private:
    string name;
    string address;
};

std::ostream &print(std::ostream &os, const Person &p) {
    os << "name: " << p.getName() << " address: " << p.getAddress() << std::endl;
    return os;
}
std::istream &read(std::istream &is, Person &p) {
    is >> p.name >> p.address;
    return is;
}
