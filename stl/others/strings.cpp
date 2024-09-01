#include <bits/stdc++.h>

using namespace std;

int main() {
    // String creation
    string s1 = "Hello";
    string s2("World");
    string s3(5, 'A');  // AAAAA

    // Concatenation
    string s4 = s1 + " " + s2;  // Hello World
    s1 += " C++";  // Hello C++

    // Accessing characters
    char first = s1[0];  // H
    char last = s1.back();  // +
    char at_index = s1.at(1);  // e

    // Substrings
    string sub = s4.substr(6, 5);  // World
    
    // Finding
    size_t pos = s4.find("World");  // 6
    pos = s4.find_first_of("aeiou");  // 1 (first vowel)
    
    // Replacing
    s4.replace(0, 5, "Hi");  // Hi World
    
    // Inserting and erasing
    s4.insert(2, " there");  // Hi there World
    s4.erase(3, 6);  // Hi World
    
    // Comparing
    bool is_equal = (s1 == "Hello C++");
    int compare_result = s1.compare(s2);
    
    // Size and capacity
    size_t length = s4.length();  // same as s4.size()
    s4.resize(20, '!');  // Extends the string, filling with '!'
    s4.clear();  // Empties the string
    bool is_empty = s4.empty();
    
    // Iterators
    string::iterator it = s1.begin();
    string::reverse_iterator rit = s1.rbegin();
    
    // Converting to C-style string
    const char* c_str = s1.c_str();
    
    // Numeric conversions
    string num_str = "42";
    int num = stoi(num_str);
    string float_str = "3.14";
    double pi = stod(float_str);
    
    // String streams (include <sstream>)
    // stringstream ss;
    // ss << "Value: " << 42;
    // string result = ss.str();
    
    // Transformations (include <algorithm>)
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    
    // Trimming (C++20 has std::trim, but here's a manual way)
    auto trim = [](string &s) {
        s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) {
            return !isspace(ch);
        }));
        s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
            return !isspace(ch);
        }).base(), s.end());
    };
    
    string to_trim = "  trim me  ";
    trim(to_trim);  // "trim me"

    // Display some results
    cout << "s1: " << s1 << endl;
    cout << "s2 (uppercase): " << s2 << endl;
    cout << "Trimmed string: " << to_trim << endl;

    return 0;
}