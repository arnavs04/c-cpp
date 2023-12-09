#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    int binNum = 0, i = 0;
    while (num != 0)
    {
        int bit = num & 1;
        binNum += (bit * pow(10, i));
        num = num >> 1;
        i++;
    }
    cout << "The binary number is " << binNum << endl;
    return 0;

}