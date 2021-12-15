#include <iostream>
#include <math.h>
using namespace std;
class Uchburchak{
  
 private:
   int a, b, c;
   
 public:
   void setter(int x, int y, int z){
     a = x; b = y; c = z;
   }
   
   int per_getter(){
     int p;
     p = a + b + c;
     return p;
   }
   
   double yuza_getter(){
     double s, p;
     p = (a + b + c) / 2;
     s = sqrt(p * (p - a) * (p - b) * (p - c));
     return s;
   }
   
   
   void turi(int a, int b, int c){
	if(a==b or a==c or b==c){
		cout<<"\nTeng yonli ";
	}else if(a!=b or a!=c or b!=c){
		cout<<"\nTurli tomonli";
	}else if(a==b==c){
		cout<<"\nTeng tomonli";
	}
}

};


int main(){
  
  Uchburchak u1;
  
  int a, b, c;
  
  cout << " a = "; cin >> a;
  cout << " b = "; cin >> b;
  cout << " c = "; cin >> c;
  u1.setter(a, b, c);
  cout << "per = " << u1.per_getter() << endl;
  cout << "yuza = " << u1.yuza_getter();
  u1.turi(a,b,c);
  return 0;
}