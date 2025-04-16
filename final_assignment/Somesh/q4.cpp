// 4. Write a C++ program to rotate an array to the right by k
//  positions.

#include <iostream>
using namespace std;

// Function to reverse a part of array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateRight(int arr[], int n, int k) {
    k = k % n; // Normalize k if greater than array size
    reverse(arr, 0, n - 1);       // Step 1: Reverse whole array
    reverse(arr, 0, k - 1);       // Step 2: Reverse first k elements
    reverse(arr, k, n - 1);       // Step 3: Reverse remaining elements
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int k;

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout << "Enter number of positions to rotate: ";
    cin >> k;

    cout << "Original array: ";
    printArray(arr, n);

    rotateRight(arr, n, k);

    cout << "Array after right rotation by " << k << " positions: ";
    printArray(arr, n);

    return 0;
}