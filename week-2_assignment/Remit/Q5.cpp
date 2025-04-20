#include <bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {
    int arr[] = {1, 3, 5, 6, 4, 2, 7};
    int size = 7;
    sortArray(arr, size);
    int second_smallest = arr[size-2];
    cout << "The second smallest element in the array is: "<< second_smallest << endl;
    return 0;
}