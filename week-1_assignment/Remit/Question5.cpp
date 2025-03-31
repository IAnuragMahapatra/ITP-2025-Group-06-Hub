#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i = 1; i*i <= n; i++){
        if (i*i == n){
            cout<<"The number is a perfect square."<<endl;
            return 0;
        } 
    }
    cout<<"The number is not a perfect square."<<endl;
    return 0;
}