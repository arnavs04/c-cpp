#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    cout << "Enter a binary number: ";
    cin >> num;
    int decNum = 0, i = 0;
    while (num != 0)
    {
        int digit = num % 10;
        if (digit == 0 || digit == 1)
        {
            decNum += (digit * pow(2, i));
            num /= 10;
            i++;             
        }
        else 
        {
            cout << "Enter a binary number please!!!" << endl;
            return 1;
        }
       
    }
    cout << "The decimal number is " << decNum << endl;
    return 0;
}