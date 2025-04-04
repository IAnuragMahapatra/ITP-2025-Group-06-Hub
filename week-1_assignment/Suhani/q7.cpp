#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout << "Enter a no.:";
	cin >> n;
	int num=1;
	for (int i=0;i<3;i++)
	{
		for (int j=0; j<n; j++)
		{
			if(j>0)
			{
				cout << "*";
			}
			cout << num;
			num++;
		}
		cout << endl;
	}
	return 0;
}