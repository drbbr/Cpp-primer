#include <iostream>
#include <string>

using std::string;

struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    string isbn() {
        return bookNo;
    }
    Sales_data &combine(const Sales_data &rhs) {
        this->revenue += rhs.revenue;
        this->units_sold += rhs.units_sold;
        return *this;
    }
};
