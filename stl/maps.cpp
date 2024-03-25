#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // like dictionary from python
    //unique keys like a function
    map<int, int>  mp;
    mp.insert({1,2});
    mp[1] = 2;

    auto it = mp.begin();

    for (auto it: mp)
    {
        cout << it.first<< " " << it.second;
    }
}