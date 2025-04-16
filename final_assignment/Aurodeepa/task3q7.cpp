#include <iostream>
#include <string>
using namespace std;

void removeCharacter(string& str, char ch) {
    string result = ""; // Create an empty string to store the result

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ch) {
            result += str[i]; // Add characters that are not the given character
        }
    }

    str = result; // Update the original string
}

int main() {
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str); // Read the entire input string

    cout << "Enter the character to remove: ";
    cin >> ch;

    removeCharacter(str, ch);

    cout << "String after removing '" << ch << "': " << str << endl;

    return 0;
}
