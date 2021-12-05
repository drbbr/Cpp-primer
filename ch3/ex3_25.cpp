#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
        {

            /* *(scores.begin() + (grade / 10))++;   error   */
            (*(scores.begin() + (grade / 10)))++;
            // *(scores.begin() + (grade / 10)) += 1;
        }
    }
    for (auto i : scores)
    {
        cout << i << " ";
    }
    return 0;
}