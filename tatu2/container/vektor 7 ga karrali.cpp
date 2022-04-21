#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){

	vector <int> karrali;
	int n,a; 
	cout<<" n= "; cin>>n;
	
	for(int i=1; i<=n; i++){
		
		a = rand()%100;
		karrali.push_back(a);	
		cout<<karrali.at(i-1)<<" ";
	}
	
	float sum=0,soni=0;
	cout<<"\n";
	for(int i=0; i<karrali.size(); i++){
		
		if(karrali.at(i)%7==0){
			soni ++;
			sum += karrali.at(i);
			cout<<karrali.at(i)<<" ";
		}
		
		
	}
	float  bolinma = soni/sum;
	cout<<"\nSOni "<<soni<<"  Yigindisi "<<sum<<"\nNisbat "<<bolinma;
	
	
	
}