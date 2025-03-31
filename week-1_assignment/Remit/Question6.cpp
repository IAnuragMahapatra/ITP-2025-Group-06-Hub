#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i = 1; i <= n; i++){
        int num = 1;
        for (int k = 0; k < n; k++){
            for (int j = 1; j <= i; j++){
                cout<<num;
            }
            num++;
        }
        cout<<endl;
    }
}