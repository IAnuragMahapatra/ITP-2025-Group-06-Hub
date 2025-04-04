#include<iostream>
using namespace std;


int main() 
{
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal == 0) 
    {
        cout << "Binary: 0" << endl;
        cout << "Octal: 0" << endl;
        return 0;
    }
int binary = 0, place = 1, num = decimal;
    while (num > 0) {
        int rem = num % 2;
        binary += rem * place;
        num /= 2;
        place *= 10;
    }
int octal = 0; 
    place = 1;
    num = decimal;
    while (num > 0) {
        int rem = num % 8;
        octal += rem * place;
        num /= 8;
        place *= 10;
    }
    

    cout << "Binary: " << binary << endl;
    cout << "Octal: " << octal << endl;

    return 0;
}