#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int line=1; line<=n; line++) {

        for(int num=1; num<=line; num++) {
            cout << num;
        }

        int space = 2*(n-line);
        for(int s=1; s<=space; s++) {
            cout << " ";
        }

        for(int num=line; num>=1; num--) {
            cout << num;
        }

        cout << endl;
    }
    return 0;
}
