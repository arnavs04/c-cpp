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
    cout << "a & b = " << (a & b) << endl; // AND
    cout << "a | b = " << (a | b) << endl; // OR
    cout << "a ^ b = " << (a ^ b) << endl; // XOR
    cout << "~a = " << (~a) << endl;       // NOT

    // Left Shift & Right Shift Operators
    cout << (17 >> 1) << endl; // same as dividing by 2
    cout << (5 << 2) << endl;  // same as multiplying by 2
    return 0;
}