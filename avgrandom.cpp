#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    long int avg = 0;
    for(int i = 0; i < 10; i++)
    {
        long int x = rand();
        cout << "Value of Random Number " << i+1 << " is " << x << endl;
        avg += x;
    }
    avg /= 10;
    cout << "The Average Value of all Random Values is " << avg << endl;
    return 0;
}