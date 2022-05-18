#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> royxat;
	int n;
	cout<<"n="; cin>>n;
	
	for(int i=1; i<=n; i++){
		royxat.push_back(rand()%30);
	}
	cout<<"Jami royxat\n";
	for(auto it = royxat.begin(); it!=royxat.end(); ++it){
		cout<<*it<<" ";
	}
	cout<<"\n\n";
	int  min = *royxat.begin();
	vector<int>::iterator k;
	
		for(auto it = royxat.begin(); it!=royxat.end(); ++it){
			if(*it<min){
				min = *it;
				k = it;
			}
	}
	cout<<"min: "<<min;
	
	royxat.insert(k+1,0);
	cout<<"\n\nO'zgargan' royxat\n";
	for(auto it = royxat.begin(); it!=royxat.end(); ++it){
		cout<<*it<<" ";
	}
	
}