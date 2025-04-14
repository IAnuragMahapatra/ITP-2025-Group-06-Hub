// 3. Write a C++ program to copy the elements of one array into another array
#include <iostream>
using namespace std;

int main()
{
  int num;
  cout<<"Enter the size of the array: ";
  cin>>num;
  int arr[num];
  cout<<"Enter the elements of the array: ";
  for (int i = 0; i < num; i++)
  {
    cin>>arr[i];
  }
  cout<<"The original array: "<<endl;
  for (int i = 0; i < num; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl<<"The Copied array: "<<endl;
  int arrc[num];
  for (int i = 0; i < num; i++)
  {
    arrc[i]=arr[i];
  }
  for (int i = 0; i < num; i++)
  {
    cout<<arrc[i]<<" ";
  }
  return 0;
}