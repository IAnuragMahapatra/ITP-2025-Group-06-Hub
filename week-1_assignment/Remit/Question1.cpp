#include <iostream>
using namespace std;

// void fizzbuzz(int n){
//     for (int i = 1; i <= n; ++i) {
//         if (i % 3 == 0 && i % 5 == 0) {
//             cout << "FizzBuzz" << endl;
//         } else if (i % 3 == 0) {
//             cout << "Fizz" << endl;
//         } else if (i % 5 == 0) {
//             cout << "Buzz" << endl;
//         } else {
//             cout << i << endl;
//         }
//     }
// }

void fizzbuzz(int n){
    for (int i = 1; i <= n; ++i){
        string s;
        if (i % 3 == 0) s = s + "Fizz";
        if (i % 5 == 0) s = s + "Buzz";
        if (s == "") s = to_string(i);
        cout<< s <<endl;
    }
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fizzbuzz(n);
    return 0;
}