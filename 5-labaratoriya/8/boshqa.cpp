/* ispunct example */
#include <stdio.h>
#include <ctype.h>
#include <iostream>
using namespace std;
int main ()
{
  int i=0;
  int cx=0;
  char str[]="Hello, welcome!";
  while (str[i])
  {
    if (ispunct(str[i])) {
	cout<<str[i];
	cx++;
    
    }
    i++;
  }
  cout<<cx;
  return 0;
}