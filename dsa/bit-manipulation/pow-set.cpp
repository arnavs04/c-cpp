#include <bits/stdc++.h>
using namespace std;

void print_power_set(const vector<vector<int>>& power_set) {
    for (const auto& subset : power_set) {
        cout << "{";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ",";
        }
        cout << "} ";
    }
    cout << endl;
}

vector<vector<int>> power_set_two(vector<int>& nums) {
    vector<vector<int>> subsets;
    int n = nums.size();
    int subset_size = 1 << n;

    for (int i = 0; i < subset_size; i++) {
        vector<int> subset = {};
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) subset.push_back(nums[j]);
        }
        subsets.push_back(subset);
    }

    return subsets;
}

vector<vector<int>> power_set_one(vector<int>& nums) {
    vector<vector<int>> subs = {{}};
    for (int num : nums) {
        int n = subs.size();
        for (int i = 0; i < n; i++) {
            subs.push_back(subs[i]); 
            subs.back().push_back(num);
        }
    }
    return subs;
}

int main() {
    vector<int> arr = {2, 3, 4};

    vector<vector<int>> result_one = power_set_one(arr);
    cout << "Power Set One:" << endl;
    print_power_set(result_one);

    vector<vector<int>> result_two = power_set_two(arr);
    cout << "Power Set Two:" << endl;
    print_power_set(result_two);

    return 0;
}