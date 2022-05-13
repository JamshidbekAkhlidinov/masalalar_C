#include <iostream>
#include <vector>

using namespace std;
int main(){
	vector <int> toplam;
	int n;
	cout<<"n=";
	cin>>n;
	for(int i=1; i<=n; i++){
		toplam.push_back(rand()%100);
	}
	
	vector<int> ::iterator it = toplam.begin();
	
	
	cout<<*it<<"\n";
	it++;
	cout<<*it<<"\n";
	it++;
	cout<<*it<<"\n";
	it++;
	cout<<*it<<"\n";
	it++;
	cout<<*it<<"\n";
	it--;
	cout<<*it<<"\n";
	it--;
	cout<<*it<<"\n";
		it--;
	cout<<*it<<"\n";
		it--;
	cout<<*it<<"\n";
	
	
}