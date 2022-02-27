#include <iostream>
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
    string isbn() {
        return bookNo;
    }
    Sales_data &combine(const Sales_data &rhs) {
        this->revenue += rhs.revenue;
        this->units_sold += rhs.units_sold;
        return *this;
    }
};

int main() {
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}
