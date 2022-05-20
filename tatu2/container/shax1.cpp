#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	vector<float> k,p,tub;
	int n;
	cout<<"n=";
	cin>>n;
	cout<<"\nBirinchi toplam\n";
	for(int i=1; i<=n; i++){
		float d = (rand()%30);
		k.push_back(d);
		cout<<d<<" ";
	}
	cout<<"\n\nIkkinchi toplam\n";
	for(int i=1; i<=n; i++){
		float d = (rand()%30);
		p.push_back(d);
		cout<<d<<" ";
	}
	cout<<"\n\nTublar\n";
	for(auto it = k.begin(); it!=k.end(); ++it){
		for(int y=2; y<=sqrt(*it); y++){
			if(*it%y==0){
				cout<<y<<" ";
				break;
			}
		}
	}
	
	
	
}