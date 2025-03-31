#include <iostream>
#include <cmath>
using namespace std;

// void reverse(int n){
//     int result = 0;
//     while (n > 0)
//     {
//         int digit = n % 10;
//         result = result * 10 + digit;
//         n = n / 10;
//     }
//     cout << "The reverse of the number is: " << result << endl;
// }

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = 0;
    while (n > 0)
    {
        int digit = n % 10;
        result = max(result, digit);
        n = n / 10;
    }
    cout << "The largest digit is: " << result << endl;
    return 0;
}