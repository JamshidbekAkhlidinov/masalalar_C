#include <iostream>
#include <deque>
#include <ctime>

using namespace std;
int main(){
	srand(time(0));
	
	deque<int> navbat;
	
	int n;
	
	cout<<"N="; cin>>n;
	
	for(int i=1; i<=n; i++){
		navbat.push_back(70-rand()%100);
	}
	
	cout<<"\nHammasi\n";
	for(auto it=navbat.begin(); it!=navbat.end();++it){
		cout<<*it<<" ";
	}
	
	cout<<"\n\nBirinchi uchragan manfiy\n";
	for(auto it=navbat.begin(); it!=navbat.end();++it){
		if(*it<0){
			cout<<*it<<" ";
			break;
		}	
	}
	
	
}