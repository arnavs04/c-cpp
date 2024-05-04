#include <bits/stdc++.h>
using namespace std;

string evenOrOdd(int num) {
    // Using the ternary operator to return "even" if num % 2 is 0, otherwise "odd"
    return (num % 2 == 0) ? "even" : "odd";
}

int main() {
    int num = 10;
    string result;

    // Using the ternary operator to assign a value to 'result' based on the condition
    result = (num > 5) ? "Number is greater than 5" : "Number is not greater than 5";

    // Output the result
    cout << result << endl;

    return 0;
}
