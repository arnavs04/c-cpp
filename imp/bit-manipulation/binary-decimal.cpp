#include <bits/stdc++.h>
using namespace std;

string convert2binary(int n) {
    string result = "";
    while(n != 1) {
        if (n%2 == 1) result.append("1");
        else result.append("0");
        n /= 2;
    }
    if (n==1) result.append("1");
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    cout << convert2binary(5) << '\n';
}