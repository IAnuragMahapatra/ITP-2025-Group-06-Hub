// 1. Take two array as input, merge them and print it in reverse order using loop
#include <iostream>
using namespace std;
int main()
{
  int num1, num2;
  cout<<"Enter the sizes of the two arrays respectively: ";
  cin>>num1>>num2;
  int arr1[num1], arr2[num2];
  cout<<"Enter the elements of the first array: "<<endl;
  for (int i = 0; i<num1; i++)
  {
    cin>>arr1[i];
  }
  cout<<endl<<"Enter the elements of the second array: "<<endl;
  for (int i = 0; i<num2; i++)
  {
    cin>>arr2[i];
  }
  int arr3[num1+num2];
  for(int i=0;i<(num1+num2);i++)
  {
    if (i<num1) arr3[i]=arr1[i];
    else arr3[i]=arr2[i-num1];
  }
  for(int i=(num1+num2-1); i>=0;i--) cout<<arr3[i]<<" ";
  return 0;
}