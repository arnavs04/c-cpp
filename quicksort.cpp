#include <bits/stdc++.h>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j) {
        while(arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while(arr[j] > pivot && j >= low + 1) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}
void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        quicksort(arr, low, pIndex - 1);
        quicksort(arr, pIndex + 1, high);
    }
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