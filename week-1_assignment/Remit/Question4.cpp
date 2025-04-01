#include <iostream>
#include <bitset>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // int k = n, binary_result = 0, octal_result = 0;
    // int power = 1;
    // while (k > 0){
    //     int rem = k % 2;
    //     binary_result = binary_result + rem * power;
    //     power = power * 10;
    //     k = k / 2;
    // }
    // power = 1;
    // while (n > 0){
    //     int rem = n % 8;
    //     octal_result = octal_result + rem * power;
    //     power = power * 10;
    //     n = n / 8;
    // }
    // cout<<"The binary form of the number is: "<<binary_result<<endl;
    // cout<<"The octal form of the number is: "<<octal_result<<endl;

    cout<<"The binary form of the number is: "<<bitset<8>(n)<<endl;
    cout<<"The octal form of the number is: "<<oct<<n<<endl;
    return 0;
}