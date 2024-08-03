#include <bits/stdc++.h>
using namespace std;

bool power_of_two(int n) {
    return ((n & (n-1)) == 0)? true: false; 
}

int main() {
    cout << power_of_two(8) << '\n'; // 1 if true else 0
}