#include <bits/stdc++.h>
using namespace std;

void swap_bits(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int a = 2; int b = 3;
    cout << swap_bits(a, b) << '\n';
}