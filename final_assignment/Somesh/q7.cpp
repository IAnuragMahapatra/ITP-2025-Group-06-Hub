//  7. Write a C++ program to remove all occurrences of a given
//  character from a string.

#include <iostream>
using namespace std;

int main() {
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter character to remove: ";
    cin >> ch;

    string result = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ch) {
            result += str[i]; // Keep character if it's not the one to remove
        }
    }

    cout << "String after removing '" << ch << "': " << result << endl;

    return 0;
}