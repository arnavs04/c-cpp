#include <bits/stdc++.h>
using namespace std;

vector<int> prime_factors(int n) {
    vector<int> factors = {};
    int sqrt_num = sqrt(n);
    for (int i = 2; i <= sqrt_num; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) factors.push_back(n);
    return factors;
}

int main() {    
    vector<int> res = prime_factors(345909);
    for (auto num: res) {
        cout << num << ' '; // 1 if true else 0
    }
    cout << "\n";
    return 0;
}