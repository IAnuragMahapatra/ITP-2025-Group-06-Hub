#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout <<"Enter 3 sides:";
	cin >> a >> b >> c;
	if(a+b>c && b+c>a && a+c>b)
	{
		cout << "A triangle can be formed" << endl;
		if(a==b && a==c)
		{
			cout << "Equilateral triangle" << endl;
		}
		else if(a==b || b==c || a==c)
		{
			cout << "Isoscale triangle" << endl;
		}
		else
		{
			cout << "Scalene triangle" << endl;
		}
	}
	else
	{
		cout << "A triangle cannot be formed" << endl;
	}
	return 0;
}