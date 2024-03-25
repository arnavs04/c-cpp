#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //same functions as vectors
    //except it includes operations in front
    // deque same almost
    list<int> l;

    l.push_front(20); // time complexity is less as it uses doubly linked list
    l.emplace_front(30);
}