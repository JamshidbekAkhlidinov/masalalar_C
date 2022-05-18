#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
using namespace std;
int main(){
	vector<int> royxat;
	vector<int> royxat2;
	
	srand(time(0));
	int n;
	cout<<"n="; cin>>n;
	for(int i=1; i<=n; i++){
		royxat.push_back(10-rand()%30);
	}
	
	
	for(auto it = royxat.begin(); it!=royxat.end(); it++){
		cout<<*it<<" ";
		if(*it>0){
			royxat2.push_back(*it);
		}
	}
	
	
	cout<<"\n\n";
	
	if(any_of(royxat.begin(), royxat.end(),[](int k){return k%5==0;})){
		cout<<"5 ga karralilar bor";
	}else{
		cout<<"Mavjud emas";
	}
	
	cout<<"\n\nFaqat musbatlar";
	for(auto it = royxat2.begin(); it!=royxat2.end(); it++){
		cout<<*it<<" ";
	}

	
}