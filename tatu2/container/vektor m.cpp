#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){

	vector <int> karrali;
	int n,a; 
	cout<<" n= "; cin>>n;
	cout<<"Hamma elementlar\n";
	for(int i=1; i<=n; i++){
		
		a = rand()%100;
		karrali.push_back(a);	
		cout<<karrali.at(i-1)<<" ";
	}
	

	cout<<"\n"<<n<<" dan jichiklar\n";
	for(int i=0; i<karrali.size(); i++){
		
		if(karrali.at(i)<n){
			cout<<karrali.at(i)<<" ";
		}
		
		
	}

	
}