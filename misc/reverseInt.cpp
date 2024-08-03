#include <iostream>
#include <cmath>

using namespace std;

void reverse(int number)
{
    int digit, sum = 0;
    while (number != 0)
    {
        digit = number % 10;
        cout << digit;
        number /= 10;
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n < 0)
    {
        n = n - (2 * n);
        cout << "The reversed integer is ";
        cout << "-";
        reverse(n);
    }
    else if (n > 0)
    {
        cout << "The reversed integer is ";
        reverse(n);
    }
    else
    {
        cout << "Please enter a non-zero integer";
        return 1;
    }
    return 0;

}