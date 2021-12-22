#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    int grade;
    cin >> grade;
    lettergrade += grade < 60 ? scores[0] : scores[(grade - 50) / 10];
    cout << lettergrade << endl;
    return 0;
}