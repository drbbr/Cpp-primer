#include <iostream>
#include <istream>
#include <ostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::cerr;

struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    Sales_data() = default;
    Sales_data(const string &s) :
        bookNo(s) {
    }
    Sales_data(const string &s, unsigned n, double p) :
        bookNo(s), units_sold(n), revenue(n * p) {
    }
    Sales_data(std::istream &is);
    string isbn() const;
    Sales_data &combine(const Sales_data &rhs);
};
string Sales_data::isbn() const {
    return bookNo;
}
Sales_data &Sales_data::combine(const Sales_data &rhs) {
    this->revenue += rhs.revenue;
    this->units_sold += rhs.units_sold;
    return *this;
}
std::istream &read(std::istream &is, Sales_data &item) {
    is >> item.bookNo >> item.units_sold >> item.revenue;
    return is;
}
std::ostream &print(std::ostream &os, const Sales_data &item) {
    os << item.bookNo << " " << item.units_sold << " " << item.revenue << endl;
    return os;
}
Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
Sales_data::Sales_data(std::istream &is) {
    read(is, *this);
}
int main() {
    Sales_data item1;
    print(cout, item1) << endl;

    Sales_data item2("0-201-78345-X");
    print(cout, item2) << endl;

    Sales_data item3("0-201-78345-X", 3, 20.00);
    print(cout, item3) << endl;

    Sales_data item4(std::cin);
    print(cout, item4) << endl;
    return 0;
}
