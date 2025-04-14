// 4. Write a C++ program to find maximum occurring integer in an array
#include <iostream>
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

    int max_count = 0;
    int max_element;

    // Compare each element with all other elements
    for(int i=0; i<num; i++) {
        int count = 1;
        for(int j=i+1; j<num; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }

    cout << "Maximum occurring element is: " << max_element << endl;
    cout << "It occurs " << max_count << " times." << endl;

    return 0;
}