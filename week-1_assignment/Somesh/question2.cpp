#include <iostream>
using namespace std;

int main()
{
  int side1, side2, side3;
  cout<<"Enter the sides of the triangle: ";
  cin>>side1>>side2>>side3;
  if(side1+side2<=side3 || side2+side3<=side1 || side1+side3<=side2)
  {
    cout<<"Invalid triangle"<<endl;
    return 0;
  }
  else 
  {
    cout<<"Valid triangle"<<endl;
  }
  if(side1==side2 && side2==side3)
  {
    cout<<"Equilateral triangle"<<endl;
  }
  else if(side1==side2 || side2==side3 || side1==side3)
  {
    cout<<"Isosceles triangle"<<endl;
  }
  else
  {
    cout<<"Scalene triangle"<<endl;
  }
  return 0;
}