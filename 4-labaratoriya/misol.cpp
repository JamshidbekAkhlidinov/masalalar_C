#include<iostream> 
#include<cmath> 
using namespace std; 
class turtburchak{ 
public: 
int a, b, c, d; 
turtburchak(){} 
turtburchak(int a,int b,int c,int d){} 
int peremetr(){ 
 return a+b+c+d; 
   }  
}; 
class paralellogram:public turtburchak{ 
public: 
int alpha; 
paralellogram(){} 
paralellogram(int a,int alpha):turtburchak(a, b, a, b),alpha(alpha){} 
double yuza(){ 
 return a*b*sin(alpha * acos(-1) / 180); 
}  
}; 
class romb:public parallelogram{ 
 public: 
  romb(){} 
  romb(int_a,int_alpha):parallelogram(_a, _a, _alpha){} 
}; 
int main(){ 
 turtburchak t(2,3,4,5); 
 parallelogram p(5,7,30); 
 romb r(10,45) 
  
}