#include <iostream>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    cin >> str;

    for (char ch : str) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            result += ch;
        }
    }

    cout << "String after removal is: " << result << endl;

    return 0;
}
