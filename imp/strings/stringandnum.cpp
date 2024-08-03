#include <bits/stdc++.h>
using namespace std;

int stringToNumber(const string& str) {
    return stoi(str);
}
string numberToString(int number) {
    return to_string(number);
}

int main() {
    int number = 12345;
    string str = numberToString(number);
    int new_number = stringToNumber(str);
    cout << "Converted string: " << str << endl;
    cout << "Converted number: " << new_number << endl;
    return 0;
}