#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Check if the array has at least two elements
    if (n < 2) {
        cout << "Array must contain at least two elements." << endl;
        return 0;
    }

    int arr[n];

    // Input the elements of the array
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize smallest and second smallest
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    // Traverse the array to find the smallest and second smallest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest; // Update second smallest
            smallest = arr[i];         // Update smallest
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i]; // Update second smallest
        }
    }

    // Output the second smallest element
    if (secondSmallest == INT_MAX) {
        cout << "No second smallest element found." << endl;
    } else {
        cout << "The second smallest element is: " << secondSmallest << endl;
    }

    return 0;
}
