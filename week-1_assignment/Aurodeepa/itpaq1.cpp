#include <iostream>
using namespace std;
int main()
{
    string x= "FIZZ";
    string y="BUZZ";
    for(int i=1;i<=100;i++)
    {
        if(i%3==0 && i%5!=0)
        {
            cout<< x << '\n';
            continue;
        }
        if(i%5==0 && i%3!=0)
        {
            cout<< y << '\n';
            continue;
        }
        if(i%5==0 && i%3==0)
        {
            cout<< x+y << '\n';
            continue;
        }
        else
        {
            cout<< i << '\n';
        }
    }
    return 0;
}