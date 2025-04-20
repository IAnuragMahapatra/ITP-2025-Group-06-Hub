#include <iostream>
using namespace std;

void New_arr(int arr[], int size) {
    int j = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6, 7, -8};
    int size = 8;

    cout << "Original array: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    New_arr(arr, size);

    cout << "\nArray after moving negatives to one side: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}
