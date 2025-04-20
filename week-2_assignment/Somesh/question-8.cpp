// 8. Find the sum of digits of a number using recursion.
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if(n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of digits is: " << sumOfDigits(n) << endl;

    return 0;
}