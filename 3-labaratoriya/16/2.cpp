#include <iostream>
#include <iostream>
using namespace std;
int main(){
	int q,w,e;
	int p[25];
		cout<<"Massivlar \n";
	for(int i=1; i<=25; i++){
		p[i] = rand()%30;
		cout<<p[i]<<" ";
	}
	int t[10];
	for(int i=1; i<=25; i++){
		if(i==1 or i==4 or i==9 or i==16 or i==25){
			w++;
			t[w] = 	p[i] ;	
		}
	}
	cout<<"\nTartiblangan massiv \n";
	for(int i=1; i<=w; i++){
		cout<<t[i]<<" ";
	}
	
}