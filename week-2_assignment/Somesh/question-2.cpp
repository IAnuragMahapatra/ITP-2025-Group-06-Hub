// 2. Write a C++ program to sort a given array using function
#include <iostream>
using namespace std;
void sort( int array[], int size);
int main()
{
  int num;
  cout<<"Enter a the size of the array: ";
  cin>>num;
  int arr[num];
  cout<<endl<<"Enter the elemets of the array: "<<endl;
  for(int i=0;i<num;i++)
  {
    cin>>arr[i];
  }
  sort(arr,num);
}

void sort( int array[], int size)
{
  array[size];
  for(int i=0;i<size-1;i++)
  {
    for (int j =0 ;j<size-i-1;j++)
    {
      if(array[j]<array[j+1])
      {
        int temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }
  cout<<endl<<"The sorted array is: "<<endl;
  for(int i=0;i<size;i++)
  {
    cout<<array[i]<<" ";
  }
}