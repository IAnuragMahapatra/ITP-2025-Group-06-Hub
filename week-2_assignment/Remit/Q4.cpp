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
    int arr[] = {1, 5, 3, 4, 2, 3, 4, 3, 3};
    sortArray(arr, 9);
    int max_item = arr[0];
    int max_freq = 1;
    int current_item = arr[0];
    int count = 1;
    for (int i = 1; i < 10; i++){
        if (current_item == arr[i]){
            count++;
            if (count > max_freq){
                max_freq = count;
                max_item = arr[i];
            }
        } else {
            count = 1;
            current_item = arr[i];
        }
    }
    cout << "The maximun occuring integer in the array is: "<<max_item<<endl;
    return 0;
}