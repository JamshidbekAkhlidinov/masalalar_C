
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
  char a[]="toshkent axborot texnologiyalari universiteti";
  int n, count0=0, a1;
  n=strlen (a);
  a1=a[0];
  cout<<"1-harf "<<char(a1)<<endl;
  for(int i=0; i<n; i++)
  {
    if (a1==a[i])
    {
      count0++;
    }
  }
  
  cout<<a[0]<<" harfi satrda "<<count0<<" marta qatnashgan \n";
}