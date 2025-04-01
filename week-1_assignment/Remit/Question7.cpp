#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int num = 1;
    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= n; j++){
            if (j != n){
                cout<<num<<"*";
            } else {
                cout<<num;
            }
            num++;
        }
        cout<<endl;
    }
}