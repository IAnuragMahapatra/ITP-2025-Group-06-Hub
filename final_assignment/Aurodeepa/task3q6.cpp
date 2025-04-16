#include <iostream>
#include <string>
using namespace std;

void toLowerCase(string& str) {
    for (int i = 0; i < str.length(); i++) {
        // Check if the character is uppercase (ASCII range 65 to 90)
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // Convert uppercase to lowercase
        }
    }
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str); // Read the entire input string

    toLowerCase(str);

    cout << "String in lowercase: " << str << endl;

    return 0;
}
