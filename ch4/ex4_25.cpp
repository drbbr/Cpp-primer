#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    cout << (int)'q' << endl;
    cout << bitset<32>('q') << endl;
    //01110001
    cout << (int)(~'q' << 6) << endl;
    cout << bitset<32>(~'q' << 6) << endl;
    //10001110
    //11111111 11111111 11100011 10000000
    //-7296
    return 0;
}