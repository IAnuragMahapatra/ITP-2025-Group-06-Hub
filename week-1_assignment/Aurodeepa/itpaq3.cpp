#include <iostream>
using namespace std;
int main()
{
    int num,dig=0,ans=0;
    cout << "Enter a number: ";
    cin >> num ;
    while(num!=0)
    {
        dig=num%10;
        if(dig>ans)
        {
            ans=dig;
        }
        num/=10;
    }
    cout << "THE LARGEST DIGIT IN THE NUMBER IS: " << ans << endl ;
    return 0;
}