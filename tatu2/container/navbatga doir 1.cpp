#include <iostream>
#include <deque>
using namespace std;

int main(){

	deque <int> navbat;
	int n;
	cout<<"n="; cin>>n;
	
	for(int i=1; i<=n; i++){
		navbat.push_back(rand()%100);
	}
	
	cout<<"\nAsosiy navbat\n";
	for(auto it = navbat.begin(); it!=navbat.end(); ++it){
		cout<<*it<<" ";
	}	
	
	deque<int> ::iterator it = navbat.end();
	it--;
	
	int birinchi = *navbat.begin();
	int end = *it;
	
	navbat.erase(navbat.begin());
	navbat.erase(navbat.end());
	
	
	navbat.push_back(birinchi);
	navbat.push_front(end);
	
	cout<<"\n\nAlmashgan navbat\n";
	
	for(auto it = navbat.begin(); it!=navbat.end(); ++it){
		cout<<*it<<" ";
	}
	
	
	
	
}