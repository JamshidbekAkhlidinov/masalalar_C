#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> myvector;
	int n;
	cout<<"Elementlar sonini kiriting =>"; cin>>n;
	for(int i=0; i<n; i++) myvector.push_back(i);
	
	cout<<"myvector contains => ";
	for(auto it = myvector.rbegin(); it !=myvector.rend(); ++it){
		
		cout<<*it<<" ";
		
	}
	return 0;
}