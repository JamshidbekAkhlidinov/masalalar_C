#include <iostream>
using namespace std;

int main(){
	double summa,b,d=0,i=0;
	int s=0,oy=0;
	
	cin>>summa>>b;
	d = summa;
	
	while(d*2>=summa){
		i++;
		summa += summa*b/100;
		cout<<i<<"-"<<summa<< "\n";
		oy++;
	}
	
	cout<<"\n\n"<<oy<<" summa "<<summa;
	
	

	
}