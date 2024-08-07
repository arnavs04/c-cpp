#include <bits/stdc++.h>
using namespace std;

bool i_bit_set(int num, int i) {
    return (num & (1 << i)) != 0;
}

int last_set_bit(int num) {
    if (num == 0) return -1; // Return -1 if there is no set bit (num is 0)
    return log2(num & -num); // Calculate the position of the last set bit
}

int main() {
    cout << i_bit_set(10, 2) << '\n'; // Outputs 1
    int num = 10; // Example number
    cout << "The position of the last set bit in " << num << " is: " << last_set_bit(num) << '\n';
    return 0;
}