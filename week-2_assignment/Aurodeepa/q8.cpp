#include <iostream>
using namespace std;

// Recursive function to find the sum of digits
int sumOfDigits(int n) {
    if (n == 0) {
        return 0; // Base case: if the number is 0, the sum of its digits is 0
    }
    return (n % 10) + sumOfDigits(n / 10); // Add the last digit to the sum of the remaining digits
}

int main() {
    int num;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    // Ensure the number is positive
    if (num < 0) {
        num = -num; // Make the number positive if it is negative
    }

    // Find and output the sum of digits
    cout << "The sum of the digits is: " << sumOfDigits(num) << endl;

    return 0;
}
