#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;


    for(int i = 2; i <= n + 1; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= i - 1; k++) {
                cout << j;
            }
        }
        cout << endl;
    }

    return 0;
}
