#include <iostream>
using namespace std;

// Recursive function to find the Nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) return 0;  // Base case: 0th Fibonacci number
    if (n == 1) return 1;  // Base case: 1st Fibonacci number
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive relation
}

int main() {
    int n;

    // Input the position (N) of the Fibonacci number
    cout << "Enter the position (N) of the Fibonacci number: ";
    cin >> n;

    // Output the Nth Fibonacci number
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}
