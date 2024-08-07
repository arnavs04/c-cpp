#include <bits/stdc++.h>
using namespace std;

int min_bit_flips(int a, int b) {
    int res = a ^ b;
    int cnt = 0;
    for (int i = 0; i < 32; i++) {
        if (res & (1 << i)) cnt++;
    }
    return cnt;
}

int main() {
    cout << min_bit_flips(13, 4) << '\n';
}