#include <iostream>

using namespace std;

int main()
{
    int inum, base1, base2;
    cout << "What is the initial number? ";
    cin >> inum;
    cout << "What is the initial base? ";
    cin >> base1;
    cout << "What is the final base? ";
    cin >> base2;
    int q = base2 + 1, r;
    int array[100];
    int hdig, tdig, odig;
    hdig = inum / 100;
    tdig = (inum - (100 * hdig)) / 10;
    odig = inum - hdig * 100 - tdig * 10;
    int dnum = hdig * base1 * base1 + tdig * base1 + odig;
    cout << "Decimal Number is " << dnum << endl;
    int i = 0;
    
    while (q >= base2)
    {
        q = dnum / base2;
        r = dnum % base2;
        dnum = q;
        cout << r;
        array[i] = r;
    } 

    array[i + 1] = q;
    
    cout << q << endl;
    int pnum;

    for (int j = 0; j < i; j++)
    {
        pnum = array[i-j];
        cout << pnum;
    }   
    return 0;
}