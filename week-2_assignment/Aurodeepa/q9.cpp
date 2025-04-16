#include <iostream>
using namespace std;

// Recursive function to print array elements
void printArray(int arr[], int size, int index) {
    if (index == size) {
        return; // Base case: stop when all elements are printed
    }
    cout << arr[index] << " "; // Print the current element
    printArray(arr, size, index + 1); // Recursive call for the next element
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input elements of the array
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print the array using recursion
    cout << "Array elements are: ";
    printArray(arr, n, 0); // Call the recursive function starting from index 0
    cout << endl;

    return 0;
}
