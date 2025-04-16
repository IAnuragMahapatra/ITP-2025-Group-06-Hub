#include <iostream>
using namespace std;

void moveNegatives(int arr[], int n) {
    int j = 0; // Index to keep track of the position for negative elements
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            // Swap the negative element to the left side
            swap(arr[i], arr[j]);
            j++; // Increment the position
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
    int arr[] = {-5, 7, -3, 0, 4, -1, 10, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    moveNegatives(arr, n);

    cout << "Array after moving negatives: ";
    printArray(arr, n);

    return 0;
}
