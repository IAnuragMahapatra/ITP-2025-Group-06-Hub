#include <iostream>
using namespace std;

int main() {
    int decimal;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    int num = decimal;

    // Convert to Binary
    int binary[32];
    int i = 0;
    while(num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    cout << "Binary equivalent: ";
    for(int j = i-1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;

    // Reset num for Octal conversion
    num = decimal;
    int octal[32];
    i = 0;
    while(num > 0) {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }

    cout << "Octal equivalent: ";
    for(int j = i-1; j >= 0; j--) {
        cout << octal[j];
    }
    cout << endl;

    return 0;
}
