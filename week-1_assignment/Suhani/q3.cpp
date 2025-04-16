#include<iostream>
using namespace std;
int main()
{
	int n,i,digit=0,max=0;
	cout << "Enter a no.:";
	cin >> n;
	for(i=1;n!=0;i++)
	{
		digit=n%10;
		if(max<digit)
		{
			max=digit;
		}
		n=n/10;
	}
	cout << "The largest digit is " << max << endl;
	return 0;
}