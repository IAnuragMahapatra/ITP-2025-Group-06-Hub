//  3. Write a C++ program to remove all characters except alphabets
//  in a string.

#include <iostream>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (isalpha(ch)) {
            result += ch; // Keep only alphabet characters
        }
    }

    cout << "String with only alphabets: " << result << endl;

    return 0;
}