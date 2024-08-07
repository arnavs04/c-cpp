#include <bits/stdc++.h>
using namespace std;

int odd_num(int n) {
    if (n%4==1) return 1;
    else if (n%4==2) return n+1;
    else if (n%4==3) return 0;
    else return n;
}

int main() {
    cout << odd_num(15) << '\n';
    return 0;
}