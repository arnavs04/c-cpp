#include <bits/stdc++.h>
using namespace std;

int odd_num(vector<int>& nums) {
    int XOR = 0;
    for (int num: nums) XOR ^= num;
    return XOR;
}

int main() {
    vector<int> arr = {2, 2, 1, 1, 3, 3, 4, 4, 5};
    cout << odd_num(arr) << '\n';
    return 0;
}