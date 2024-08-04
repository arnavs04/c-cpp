#include <iostream>
#include <algorithm>

using namespace std;

// Brute Force
int findGCD1(int n1, int n2) {
    int gcd = 1;
    for(int i = 1; i <= min(n1, n2); i++) {
        if(n1 % i == 0 && n2 % i == 0) gcd = i;
    }
    return gcd;
}

// Euclidean Algorithm
int findGCD2(int n1, int n2) {
    while (n1 > 0 && n2 > 0) {
        if (n1 > n2) n1 %= n2;
        else n2 %= n1;
    }
    return (n1 == 0) ? n2 : n1;
}

int main() {
    int n1 = 20, n2 = 15;
    cout << __gcd(n1, n2) << endl; // stl
    cout <<  findGCD1(n1, n2) << endl;
    cout <<  findGCD2(n1, n2) << endl;    
    return 0;
}
                                
                            