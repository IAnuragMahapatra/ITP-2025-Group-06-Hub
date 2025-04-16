#include <iostream>
#include <string>
using namespace std;

void removeNonAlphabets(string& str) {
    string result = ""; // Create an empty string to store alphabets

    for (char ch : str) {
        if (isalpha(ch)) {
            result += ch; // Append alphabetic characters to the result
        }
    }

    str = result; // Update the original string with the filtered result
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str); // Read the entire input string

    removeNonAlphabets(str);

    cout << "String with only alphabets: " << str << endl;

    return 0;
}
