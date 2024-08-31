#include <bits/stdc++.h>

using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mS(vector<int>& arr, int low, int high) {
    if (low == high) {
        return;
    }
    int mid = (low + high) / 2;

    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cout << "How many elements in the unsorted array? ";
    cin >> n;
    vector<int> mv;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter element: ";
        cin >> x;
        mv.push_back(x);
    }
    cout << "\n";
    mS(mv, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << mv[i] << endl;
    }
    cout << "\n";
}
