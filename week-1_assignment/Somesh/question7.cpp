#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int num = 1;  

    for(int row = 1; row <= 3; row++) {
        for(int col = 1; col <= n; col++) {
            cout << num;
            num++;
            if(col < n) {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
