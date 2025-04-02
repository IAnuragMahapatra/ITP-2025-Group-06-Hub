#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin>> n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            for(int rep=1;rep<=row;rep++)
            {
                cout<< col;
            }     
        }
        cout << '\n';
    }
    return 0;
}