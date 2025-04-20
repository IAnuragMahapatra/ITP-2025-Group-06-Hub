#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin>>str;

    int alphabets = 0, digits = 0, specialChars = 0;
    int what = 0;
    for (char ch : str) {
        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        {
            what = 1;
        } else if (ch >= '0' && ch <= '9')
        {
            what = 2;
        }
        switch(what) {
            case (1):
                alphabets++;
                break;
            case (2):
                digits++;
                break;
            default:
                specialChars++;
                break;
        }
    }

    cout << "Total alphabets: " << alphabets << endl;
    cout << "Total digits: " << digits << endl;
    cout << "Total special characters: " << specialChars << endl;

    return 0;
}
