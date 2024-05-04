#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Sorted & Unique Elements
    set<int> s;
    s.insert();
    s.emplace();
    
    int element;
    s.insert(element);
    auto it = s.find(element);
    auto it = s.fine(/*non existing*/ element); // gives s.end() no matter what
    s.erase(element); // erases 5 and takes log time complexity

    s.count(element); // gives 1 or 0

    int element1, element2;
    auto it2 = s.find(element1);
    auto it4 = s.fine(element2);
    s.erase(it2, it4); //erases elements element1 to the one right before element2






    multiset<int> ms;
    // Just sorted but not unique elements anymore]
    // Almost same functions as set

    ms.erase(1); // erases all occurences of 1
    ms.erase(ms.find(1)); // erases firsy occurence of 1
    ms.erase(ms.find(1), ms.find(1) + 2) // erases two occurences of 1




    unordered_set<int> us;
    us.lower_bound();
    us.upper_bound();
    // Rest functions are same
}
