#include <iostream>
#include <deque>
using namespace std;

int main(){
	deque<int> deq;
	
	int n;
	cout<<"n="; cin>>n;
	
	for(int d=0; d<=n; d++){
		deq.push_back(rand()%30);
		cout<<deq.at(d)<<" ";
	}
	
	int max = deq.at(0);
	
	for(int k=0; k<=n; k++){
		for(int j=0; j<=k; j++){
			if(deq.at(k)>deq.at(j)){
				swap(deq.at(k),deq.at(j));
			}
		}
	}
	int min = deq.back();

	cout<<"\n\nMin: "<<min;
	
}