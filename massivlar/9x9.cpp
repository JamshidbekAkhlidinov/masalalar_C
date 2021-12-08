#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k, l;
  float a[9][9];
  
  for(int i=0; i<9; i++)
  {
    for(int j=0; j<9; j++)
    {
      a[i][j]=rand()%30;
      cout<<setw(5)<<a[i][j];
    }
    cout<<endl;
  }
  cout<<"\n\n";
  for(int i=0; i<9; i++)
  {
    for(int j=0; j<9; j++)
    {
      k=0;
      l=0;
      if(a[i][j]>=a[k][l])
      {
        a[i][j]=1;
        k+=1;
        l+=1;
      }
      else a[i][j]=0;
      cout<<setw(5)<<a[i][j];
    }
    cout<<endl;
  }

  
}