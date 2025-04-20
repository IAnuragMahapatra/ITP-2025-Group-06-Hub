#include <iostream>
using namespace std;

void reverse(int arr[], int left, int right) {
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int k = 2;
    k = k % size;

    reverse(arr, 0, size - 1);

    reverse(arr, 0, k - 1);

    reverse(arr, k, size - 1);

    cout << "Array after right rotation by " << k << " positions: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
