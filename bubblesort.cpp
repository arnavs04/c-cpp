#include <bits/stdc++.h>

using namespace std;

void bubblesort(int array[], int n) {
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "How many elements in the unsorted array? ";
    cin >> n;
    int  arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element: ";
        cin >> arr[i];
    }
    cout << "\n";
    bubblesort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    cout << "\n";
}