#include <iostream>
using namespace std;

int main()
{
    int n, digit, product = 1, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0)
    {
        digit = n % 10;
        product *= digit;
        sum += digit;
        n /= 10;
    }
    cout << "Product of the digits is " << product << endl;
    cout << "Sum of the digits is " << sum << endl;
    cout << "Difference between the product and the sum is " << (product - sum) << endl;
    return 0;
}