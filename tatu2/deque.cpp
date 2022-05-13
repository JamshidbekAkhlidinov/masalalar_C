#include <iostream>
#include <deque>
using namespace std;
int main(){
	deque<int> toplam;
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		toplam.push_back(rand()%30);
	}
	
	for(auto it=toplam.begin(); it!=toplam.end(); ++it){
		cout<<*it<<" ";
	}
	
}