#include <iostream>
using namespace std;

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

    // Variables to store the result
    int maxOccurringNum = arr[0];
    int maxFrequency = 0;

    // Find the maximum occurring integer
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxFrequency) {
            maxFrequency = count;
            maxOccurringNum = arr[i];
        }
    }

    // Output the result
    cout << "Maximum occurring integer is: " << maxOccurringNum << " with frequency " << maxFrequency << endl;

    return 0;
}
