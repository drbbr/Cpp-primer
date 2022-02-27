#include <iostream>
#include <istream>
#include <ostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::cerr;
struct Sales_data;
std::istream &read(std::istream &, Sales_data &);
struct Sales_data {
    friend std::istream &read(std::istream &, Sales_data &);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

public:
    Sales_data() = default;
    Sales_data(const string &s) :
        bookNo(s) {
    }
    Sales_data(const string &s, unsigned n, double p) :
        bookNo(s), units_sold(n), revenue(n * p) {
    }
    Sales_data(std::istream &is) {
        read(is, *this);
    }

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
int main() {
    Sales_data total(cin);
    if (total.isbn() != "") {
        Sales_data trans(cin);
        while (trans.isbn() != "") {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total);
                total = trans;
            }
        }
        print(cout, total);
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}
