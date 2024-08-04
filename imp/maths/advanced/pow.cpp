#include <bits/stdc++.h>
using namespace std;

double pow(int x, int n) {
    if (n == INT_MIN) {
        if (x == 1 || x == -1) return 1;  
        return 0;  
    }

    bool isNegative = n < 0;
    if (isNegative) {
        n = -n;
        x = 1 / x;
    }

    double ans = 1;
    while (n > 0) {
        if (n%2==1) {
            ans *= x;
            n -= 1;
        }
        else {
            n /= 2;
            x *= x;
        }
    }
    return ans;
}

int main() {    
    cout << pow(7, 4) << "\n";
    return 0;
}