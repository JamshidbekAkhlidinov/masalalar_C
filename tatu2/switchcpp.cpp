#include <iostream>
using namespace std;
int main(){
	
	int d,m;
	cin>>d>>m;
	
	switch(d){
		case 1 ... 31:
			if(d<31){
				d++;
			}else if(d==31){
				d=1;
			}
			cout<<" Kun "<<d; break;
		default: cout<<"\nBunday kun mavjud emas\n";
	}
	
	switch (m){
		case 1 ... 12:
			if(m<12 and d==31){
				m++;
			}else 
			if(m==12 and (d==31 or d==1)){
				m=1;
			}
			cout<<" Oy "<<m<<"\n\n"; break;
		default: cout<<"\nBunday oy mavjud emas\n";
	}
		
	

	
	
	main();
	
	
}