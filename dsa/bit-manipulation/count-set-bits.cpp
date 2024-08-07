#include <bits/stdc++.h>
using namespace std;

int count_set_bits(int n) {
    int count = 0;
    while(n != 1) {
        count += (n & 1);
        n = n >> 1;
    }
    if (n==1) count++;
    return count;
}

int main() {
    cout << count_set_bits(13) << '\n';
}