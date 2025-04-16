//  5. Write a C++ program to remove duplicates from an array and
//  create a new array and store all distinct elements.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array:->"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int distinct[n]; // New array to store distinct elements
    int size = 0;    // Size of new array

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < size; j++) {
            if (arr[i] == distinct[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            distinct[size] = arr[i];
            size++;
        }
    }

    cout << "Array with distinct elements: ";
    for (int i = 0; i < size; i++) {
        cout << distinct[i] << " ";
    }
    cout << endl;

    return 0;
}