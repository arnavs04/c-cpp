#include <bits/stdc++.h>
using namespace std;

int sieve(int n) {
    vector<int> prime(n + 1, 1); 
    prime[0] = prime[1] = 0; 

    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (prime[i] == 1) {
            count++;
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 0; 
            }
        }
    }

    return count;
}

int main() {    
    cout << sieve(10) << "\n";
    return 0;
}