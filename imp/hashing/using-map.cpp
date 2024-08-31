#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // iterate over the map:
    /* for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }
    */

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetch:
        cout << mp[number] << endl;
    }
    return 0;
}

// When hashing large numbers like 10^9 or higher, we can use map and unordered_map in C++ or HashMap in Java.

// Key: In a map, a key refers to the element, for which we want to store information. We can access the value of a key using the key itself like mp[key].
// Value: Value refers to the information stored corresponding to a key.
// In our example, we want to store the frequency(i.e. How many times an element appears in the array) of each element of the given array. 
// So, here each element of the array will be the key of the map and frequencies will be the value corresponding to the keys. 
// In terms of code, it will look like the following:

// Difference between map and unordered_map in C++:
// The main difference between map and unordered_map in C++ is that map is implemented as a red-black tree which is a self-balancing binary search tree and guarantees the elements to be sorted. 
// On the other hand, unordered_map is implemented using hashing and does not maintain any order of elements.
// So, the choice between map and unordered_map depends on whether you need the elements to be sorted or not.

// Difference between array hashing and hashing using the map:
// Let’s understand the difference considering the array: [1, 2, 3, 1, 3, 2, 12]. 
// Here, the maximum element of the array is 12. So, if we apply array hashing, we need an array of size 13. 
// But if we apply the map data structure, it will be the following:
// (1, 2)
// (2, 2)
// (3, 2)
// (12, 1)
// Note: If we want to fetch the value of a key that does not exist in the map, the map will always return 0 in C++ and null in Java.

