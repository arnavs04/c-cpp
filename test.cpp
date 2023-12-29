#include <bits/stdc++.h>
using namespace std;

void my_swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void quicksort(vector<int> array, int low, int high) {
    
}

int main() {
    int n;
    cout << "How many elements in the unsorted array? ";
    cin >> n;
    vector<int> qv;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter element: ";
        cin >> x;
        qv.push_back(x);
    }
    cout << "\n";
    quicksort(qv, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << qv[i] << endl;
    }
    cout << "\n";
}