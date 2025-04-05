#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;

    bool isPerfectSquare = false;

    for(int i = 1; i <= num / 2; i++) {
        if(i * i == num) {
            isPerfectSquare = true;
            break;
        }
    }

    if(num == 0 || num == 1) {
        isPerfectSquare = true;
    }

    if(isPerfectSquare) {
        cout << num << " is a Perfect Square." << endl;
    } else {
        cout << num << " is not a Perfect Square." << endl;
    }

    return 0;
}
