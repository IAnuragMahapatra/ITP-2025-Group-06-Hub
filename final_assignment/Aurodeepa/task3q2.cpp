#include <iostream>
#include <string>
using namespace std;

void countCharacters(const string& str, int& alphabets, int& digits, int& specialChars) {
    // Initialize counters
    alphabets = 0;
    digits = 0;
    specialChars = 0;

    for (char ch : str) {
        if (isalpha(ch)) {
            alphabets++;
        } else if (isdigit(ch)) {
            digits++;
        } else {
            specialChars++;
        }
    }
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str); // Read the entire input string

    int alphabets, digits, specialChars;
    countCharacters(str, alphabets, digits, specialChars);

    cout << "Total alphabets: " << alphabets << endl;
    cout << "Total digits: " << digits << endl;
    cout << "Total special characters: " << specialChars << endl;

    return 0;
}
