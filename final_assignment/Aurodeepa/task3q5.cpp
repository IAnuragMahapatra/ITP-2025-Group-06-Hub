#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int n, int result[], int& newSize) {
    newSize = 0; // Initialize the size of the new array

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        // Check if arr[i] is already in the result array
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == result[j]) {
                isDuplicate = true;
                break;
            }
        }
        // If not a duplicate, add it to the result array
        if (!isDuplicate) {
            result[newSize] = arr[i];
            newSize++;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 2, 5, 2, 3, 4, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[n]; // Temporary array to store distinct elements
    int newSize;

    cout << "Original array: ";
    printArray(arr, n);

    removeDuplicates(arr, n, result, newSize);

    cout << "Array with distinct elements: ";
    printArray(result, newSize);

    return 0;
}
