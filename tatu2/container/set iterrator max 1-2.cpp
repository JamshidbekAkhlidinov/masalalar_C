#include <iostream>
#include <set>
#include <vector>

using namespace std;
int main(){
	vector <int> toplam;
	set <int> toplam2;
	
	int n;
	cout<<"n=";
	cin>>n;
	for(int i=1; i<=n; i++){
		toplam.push_back(rand()%100);
	}
	
	for(auto it2=toplam.begin(); it2!=toplam.end(); ++it2){
		cout<<*it2<<" ";
		toplam2.insert(*it2);
	}

	set<int> ::iterator it = toplam2.end();
	it--;
	cout<<"\nMax 1 = >"<<*it;
	it--;
	cout<<"\nMax 2 = >"<<*it;
	
	
	
}