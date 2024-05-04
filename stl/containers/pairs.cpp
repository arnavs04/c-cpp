#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, int> p = {1,3}; // Can be different data types as well

    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> nestedp = {99, {100, 101}};
    cout << nestedp.first << " " << nestedp.second.first << " " << nestedp.second.second << endl;
    pair<int, int> arr[] = {{1,2}, {3, 4}, {5, 6}};

    cout << arr[1].second;
}