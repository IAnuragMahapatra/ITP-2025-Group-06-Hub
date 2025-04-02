#include <iostream>
using namespace std;
int main()
{
    int num,flag=0;
    cout <<"enter a number: ";
    cin>> num;
    for(int i=0;i*i<=num;i++)
    {
        if(i*i==num)
        {
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<< "PERFECT SQUARE" << endl;
    }
    else
    {
        cout<< "NOT PERFECT SQUARE" << endl;
    }
    return 0;
}