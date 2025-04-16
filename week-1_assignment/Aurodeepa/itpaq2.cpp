#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "enter sides of the triangle" <<'\n';
    cin >> a;
    cin>> b;
    cin >> c;
    cout<< "\n THE SIDES OF THE TRIANGLE ARE:\n" << a << '\n'<< b<<'\n' << c << '\n';
    //to check if the triangle is valid 
    if(a+b>c || b+c>a || c+a>b)
    {
        cout<< "The triangle is valid\n";
    }
    else
    {
        cout << "The triangle is NOT valid\n";
    }

    //checking if triangle is equi, iso or scalene
    if(a==b && b==c)
    {
       cout<< "EQUILATERAL TRIANGLE";
       
    }
    else if(a==b || b==c || c==a)
    {
        cout<< "ISOSCELES TRIANGLE";
    }
   
    else
    {
        cout<< "SCALENE TRIANGLE";
    }
    return 0;
}