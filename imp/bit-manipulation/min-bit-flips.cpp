#include <bits/stdc++.h>
using namespace std;

int min_bit_flips(int a, int b) {
    int count = 0;
    while(n != 1) {
        count += (n & 1);
        n = n >> 1;
    }
    if (n==1) count++;
    return count;
}

int main() {
    cout << min-bit-flips(13, 4) << '\n';
}