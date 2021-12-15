#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    int grade;
    cin >> grade;

    //1
    if (grade > 90)
    {
        cout << "high pass";
    }
    else if (grade >= 75)
    {
        cout << "pass";
    }
    else if (grade >= 60)
    {
        cout << "low pass";
    }
    else
        cout << "fail";
    cout << endl;
    //2
    string finalgrade = (grade > 90) ? "high pass" : (grade >= 75) ? "pass"
                                                 : (grade > 60)    ? "low pass"
                                                                   : "fail";
    cout << finalgrade << endl;
    return 0;
}