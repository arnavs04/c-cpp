#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Map

    // like dictionary from python
    // unique keys like a function
    map<int, int>  mp;
    mp.insert({1,2});
    mp[1] = 2;

    auto it = mp.begin(); // organised within

    for (auto it: mp)
    {
        cout << it.first<< " " << it.second;
    }

    auto it = mp.find(3) // gives iterator to address where key is 3
    cout << *(it).second;

    // if 3 is not then points to address after the map

    // Multimap
    // everything same as map, except it can store multiple keys
    // mp[key] cannot be used here

    // Unordered map
    // same difference as set and unordered set
}