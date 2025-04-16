// 6. Write a C++ program that takes two 2D arrays (matrices) of size
//  3×3 as input from the user. First, the program should calculate and
//  print the sum of the two original matrices. After that, it should compute
//  the transpose of both the original matrices. Finally, the program
//  should calculate and display the sum of the two transposed matrices
//  as well.
#include <iostream>
using namespace std;
int main()
{
  int row, col;
  cout<<"Enter the Row and the Column of the matrix: ";
  cin>>row>>col;
  int m[row][col];
  int n[row][col];
  int sum[row][col];
  int mt[col][row];
  int nt[col][row];
  int sumt[col][row];
  cout<<endl<<"Enter the 1st matrix:->"<<endl;
  for (int i =0;i<row;i++)
  {
    for(int j= 0;j<col;j++)
    {
      cin>>m[i][j];
    }
  }
  cout<<endl<<"Enter the 2nd matrix:->"<<endl;
  for (int i =0;i<row;i++)
  {
    for(int j= 0;j<col;j++)
    {
      cin>>n[i][j];
    }
  }
  cout<<"Sum of these matrices:->"<<endl;
  for (int i =0;i<row;i++)
  {
    for(int j= 0;j<col;j++)
    {
      sum[i][j]=m[i][j]+n[i][j];
    }
  }
  for (int i =0;i<row;i++)
  {
    for(int j= 0;j<col;j++)
    {
      cout<<sum[i][j]<<" ";
    }
    cout<<endl;
  }
  for (int i =0;i<col;i++)
  {
    for(int j= 0;j<row;j++)
    {
      mt[i][j]=m[j][i];
      nt[i][j]=n[j][i];
    }
  }
  cout<<"Sum of the transpose ofthese matrices:->"<<endl;
  for (int i =0;i<col;i++)
  {
    for(int j= 0;j<row;j++)
    {
      sumt[i][j]=mt[i][j]+nt[i][j];
    }
  }
  for (int i =0;i<col;i++)
  {
    for(int j= 0;j<row;j++)
    {
      cout<<sumt[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}