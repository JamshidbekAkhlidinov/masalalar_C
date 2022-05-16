#include <iostream>
#include <deque>
using namespace std;
int main(){
	deque<int> stek;
	deque<int> ::iterator it = stek.begin();
	
	int n;
	cin>>n;
	
	for(int i=1; i<=n;i++){
		stek.push_back(rand()%10);
	}
	
	
	for(auto it2=stek.begin(); it2!=stek.end(); ++it2){
		cout<<" "<<*it2;
		if(*it==*it2){
			stek.erase(it2);
		}
	}
	
	cout<<endl;
	
	for(auto it2=stek.begin(); it2!=stek.end(); ++it2){
		cout<<" "<<*it2;
	}
	
	
	
}