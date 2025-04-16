#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n; // To handle cases where k is larger than the array size
    int temp[k]; // Temporary array to store the last k elements

    // Step 1: Copy the last k elements to the temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Step 2: Shift the remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Step 3: Copy the elements from the temporary array back to the original array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    cout << "Original array: ";
    printArray(arr, n);

    rotateArray(arr, n, k);

    cout << "Array after rotating by " << k << " positions: ";
    printArray(arr, n);

    return 0;
}
