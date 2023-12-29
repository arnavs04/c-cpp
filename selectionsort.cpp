#include <bits/stdc++.h>

using namespace std;

void selectionsort(int arr[], int n) {
    for (int i = 0; i <= (n-2); i++) {
        int mini = i;
        for (int j = i; j <= (n-1); j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
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
    selectionsort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    cout << "\n";

}