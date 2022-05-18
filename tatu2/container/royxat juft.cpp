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
	cout<<"\nJuft elementlari\n";
		for(auto it = royxat.begin(); it!=royxat.end(); ++it){
			if(*it%2 ==0)
			cout<<*it<<" ";
	}
}