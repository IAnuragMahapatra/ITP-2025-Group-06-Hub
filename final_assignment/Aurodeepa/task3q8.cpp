#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int start = 0;            // Pointer to the beginning of the string
    int end = str.length() - 1; // Pointer to the end of the string

    while (start < end) {
        if (str[start] != str[end]) {
            return false; // Mismatch found, not a palindrome
        }
        start++;
        end--;
    }
    return true; // No mismatches found, it's a palindrome
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str); // Read the entire input string

    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
