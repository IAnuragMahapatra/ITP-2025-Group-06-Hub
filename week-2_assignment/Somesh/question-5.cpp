// 5. Write a C++ program to find the second smallest elements in a
// given array of integers(all elements of array distinct).
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int num;
    cout << "Enter size of array: ";
    cin >> num;

    int arr[num];
    cout << "Enter array elements: "<<endl;
    for(int i=0; i<num; i++) {
        cin >> arr[i];
    }

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    // Find smallest and second smallest
    for(int i=0; i<num; i++) {
        if(arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    if(second_smallest == INT_MAX) {
        cout << "Second smallest element does not exist." << endl;
    }
    else {
        cout << "Second smallest element is: " << second_smallest << endl;
    }

    return 0;
}