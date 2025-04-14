// 9. Print all elements of an array using recursion
#include <iostream>
using namespace std;

void printArray(int arr[], int n, int index) {
    if(index == n)
        return;
    cout << arr[index] << " ";
    printArray(arr, n, index + 1);
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    printArray(arr, n, 0);

    return 0;
}