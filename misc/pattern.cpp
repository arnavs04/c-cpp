#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int row, col;
    // cin >> row >> col;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0;  j < col; j++)
    //     {
    //         if (i == 0 || i == row-1 || j == 0 || j == col-1) 
    //         {
    //             cout << "*";
    //         }
    //         else 
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int k = 1;
    //     for (int j = n; j > i; j--) 
    //     {
    //         cout << k;
    //         k++;
    //     }
    //     cout << endl; 
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         if ((i+j) % 2 == 0) cout << 0; 
    //         else cout << 1;
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < sp; j++) cout << "  ";
    //     for (int k = i+1; k >= 1; k--) cout << k << " ";
    //     int x = 2;
    //     for (int z = 2; z <= i+1; z++)
    //     {
    //         cout << z << " ";
    //     }
    //     cout << endl;
    //     sp--;
    // }
    // int z = 1;
    // for (int i = 0; i < n; i++)
    // {
        
    //     for (int k = 0; k < sp; k++) cout << " ";
    //     for (int j = 1; j <= z; j++) cout <<"*";
    //     cout << endl;
    //     sp--;
    //     z += 2;
    // }
    // sp = 0;
    // z = 2*n - 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < sp; j++) cout << " ";
    //     for (int k = 1; k <= z; k++) cout << "*";
    //     cout  << endl;
    //     z -= 2;
    //     sp++;
    // }

    int sp = 2*(n-1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << j+1 << " ";
        }
        for (int k = 0; k < sp; k++) cout << "  ";
        sp-=2;
        for (int z = i; z >= 0; z--) cout << z+1 << " ";
        cout << endl;
    }
    return 0;
}