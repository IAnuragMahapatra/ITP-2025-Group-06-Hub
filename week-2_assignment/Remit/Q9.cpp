#include <iostream>
using namespace std;

void print(int arr[], int index, int size) {
    if(index == size)
        return;

    cout << arr[index] << " ";
    print(arr, index + 1, size);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Array elements are: ";
    print(arr, 0, size);

    return 0;
}
