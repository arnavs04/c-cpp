#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1(5, 100); // 5 instances of 100
    vector<int> v2(v1);

    sort(v1.begin, v1.end())

    

    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/

    sort(arr, arr + n);
 
    cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
 
    return 0;
}