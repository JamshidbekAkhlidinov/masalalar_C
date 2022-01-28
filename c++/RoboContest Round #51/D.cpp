#include <iostream>
using namespace std;
int main(){
	int p,d,m,s;
	int u,l=0;
	cin>>p>>d>>m>>s;
//20 3 6 80
//20 2 10 100
//	s = s+2*m;
	while (p>=m) {
		s=s-p; 
		p = p-d;
		l++;

	}
//	cout<<endl;
	while (s>d and s!=p) {
		s=s-p;
		l++;
//		cout<<"s="<<s;
//		cout<<" p="<<p<<endl;
	}
		

	cout<<l;
	
}