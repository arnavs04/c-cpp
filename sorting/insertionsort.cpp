#include <bits/stdc++.h>

using namespace std;

void insertionsort(int array[], int n) {
    for (int i = 0; i <= (n-1); i++) {
        int j = i;
        while(j > 0 && (array[j-1] > array[j])) {
            int temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;
            j--;
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
    insertionsort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    cout << "\n";
}