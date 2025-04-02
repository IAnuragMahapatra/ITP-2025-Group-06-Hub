#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int count = 1;                   // Initialize the counter to start from 1
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << count;
            if (j < n) {             // Add '*' only between numbers
                cout << '*';
            }
            count++;                 // Increment the counter for the next number
        }
        cout << endl;
    }

    return 0;
}
