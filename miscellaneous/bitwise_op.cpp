#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a number a: ";
    cin >> a;
    cout << "Enter a number b: ";
    cin >> b;

    // Bitwise operations
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;

    //Left Shift & Right Shift
    cout << (17 >> 1) << endl;
    cout << (5 << 2) << endl;
    return 0;
}