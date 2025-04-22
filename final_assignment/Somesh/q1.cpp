//  1. Write a C++ program to move all the negative elements to one
//  side of the array.

#include <iostream>
using namespace std;

void moveNegativesToLeft(int arr[], int n) {
    int j = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                swap(arr[i], arr[j]);
            }
            j++;
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
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }

    cout << "Original array: ";
    printArray(arr, n);

    moveNegativesToLeft(arr, n);

    cout << "Modified array: ";
    printArray(arr, n);

    return 0;
}
