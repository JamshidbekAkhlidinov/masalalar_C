
#include <iostream>
#include <math.h>
using namespace std;

float hisoblash(int a, int b, char amal){
  float s;
  switch(amal){
    case 43: s = a+b; break;
    case 45: s = a-b; break;
    case 42: s=a*b; break;
    case 47: s=a/b; break;
    default: s=0; break;
  }
}

int main(){
  
  int a,b;
  float s;
  char amal;
  cin >> a >> b >> amal;
  
  s = hisoblash(a,b,amal);
  
  cout << s << endl;
  
  return 0;
  
}