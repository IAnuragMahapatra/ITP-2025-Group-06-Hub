#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 1};
    int n = 8;
    int res[100], k = 0;

    for (int i = 0; i < n; i++) {
        bool found = false;

        for (int j = 0; j < k; j++) {
            if (arr[i] == res[j]) {
                found = true;
                break;
            }
        }

        if (!found)
            res[k++] = arr[i];
    }

    cout << "The new array is: ";
    for (int i = 0; i < k; i++)
        cout << res[i] << " ";

    return 0;
}
