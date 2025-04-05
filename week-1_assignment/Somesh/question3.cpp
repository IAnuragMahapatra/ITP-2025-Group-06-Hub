#include <iostream>
#include <climits>
using namespace std;

int main() {
    int num, largestDigit = INT_MIN;
    
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;
        if (digit > largestDigit) {
            largestDigit = digit;
        }
        num /= 10;
    }

    cout << "The largest digit is: " << largestDigit << endl;
    return 0;
}
