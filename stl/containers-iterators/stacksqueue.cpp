#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st1, st2;

    st1.push();
    st1.emplace(); // same as pop
    st1.pop();
    st1.size();
    st1.empty(); // false or true
    st1.swap(st2);
    st1.top();

    queue<int> q;
    q.front();
    q.size();
    q.back();
    q.push();
    q.emplace();
    q.pop();
    q.empty();

    // all operations are O(1)
}