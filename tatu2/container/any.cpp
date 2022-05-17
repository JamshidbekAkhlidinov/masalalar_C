#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
using namespace std;
int main(){
	vector<int> royxat;
	srand(time(0));
	int n;
	cout<<"n="; cin>>n;
	for(int i=1; i<=n; i++){
		royxat.push_back(rand()%30);
	}
	
	
	for(auto it = royxat.begin(); it!=royxat.end(); it++){
		cout<<*it<<" ";
	}
	
	
	cout<<"\n\n";
	
	if(any_of(royxat.begin(), royxat.end(),[](int k){return k%5==0;})){
		cout<<"5 ga karralilar bor";
	}else{
		cout<<"Mavjud emas";
	}
	
}