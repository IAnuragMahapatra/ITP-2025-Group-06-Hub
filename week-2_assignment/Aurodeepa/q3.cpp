#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr1[n], arr2[n];

    // Input elements of the first array
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // Copy elements from arr1 to arr2
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Output the elements of the second array
    cout << "Elements of the second array: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
