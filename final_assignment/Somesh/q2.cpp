// 2. Write a C++ program to find the total number of alphabets,
//  digits and special characters in a string.

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Read full line including spaces

    int alphabets = 0, digits = 0, specialChars = 0;

    for (char ch : str) {
        if (isalpha(ch))
            alphabets++;
        else if (isdigit(ch))
            digits++;
        else if (!isspace(ch)) // Ignore spaces from special char count
            specialChars++;
    }

    cout << "Total Alphabets: " << alphabets << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << specialChars << endl;

    return 0;
}