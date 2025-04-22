#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    cin >> str;
    char ch;
    cout<<"Enter a character you want to remove: ";
    cin >> ch;
    for (char x : str){
        x = tolower(x);
        ch = tolower(ch);
        if (x != ch){
            cout << x;
        }
    }
    return 0;
}