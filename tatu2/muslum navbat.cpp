#include <iostream>
#include <deque>
#include <time.h>
using namespace std;

int main(){
	srand(time(0));
	deque<int> navbat,navbat2;
	int n;
	cin>>n;
	
	
	for(int i=1; i<=n; i++){
		navbat.push_back(rand()%5+1);
	}
	
	for(auto it=navbat.begin(); it!=navbat.end(); it++){
		cout<<*it<<" ";
		navbat2.push_back(*it);
	}
	
	
	cout<<"\nYangi royxatdagi ementlar\n";
	for(auto it=navbat2.begin(); it!=navbat2.end(); it++){
		cout<<*it<<" ";
	}
	
	
	
	cout<<"\nOchirilgandan keyin";
	deque<int> ::iterator end = navbat.end();
	end--;
	for(auto it=navbat.begin(); it<=navbat.end(); ++it){
		if(*it==*end){
			navbat.erase(it);
		}
	}
	
	cout<<"\n";
	
	for(auto it=navbat.begin(); it!=navbat.end(); it++){
		cout<<*it<<" ";
	}
	
	
}