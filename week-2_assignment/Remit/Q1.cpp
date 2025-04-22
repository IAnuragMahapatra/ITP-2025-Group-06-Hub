#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the length of both the arrays: ";
    cin >> m >> n;
    int a[m], b[n];
    cout<<"Enter the elements of the first array: ";
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    cout<<"Enter the elements of the second array: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int arr[m + n];
    int k = 0;
    for (int i = 0; i < m; i++) {
        arr[k] = a[i];
        k++;
    }
    for (int i = 0; i < n; i++) {
        arr[k] = b[i];
        k++;
    }
    cout << "The merged array in reversed order is: ";
    for (int i = m+n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}