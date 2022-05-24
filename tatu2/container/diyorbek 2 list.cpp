#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> list;
	int n;
	cout<<"N="; cin>>n;
	
	for(int i=1; i<=n; i++){
		int r = rand()%30;
		list.push_back(r);
	}
	int s=0;
	for(auto it=list.begin(); it!=list.end(); it++){
		cout<<*it<<" ";
		s +=*it;
	}
	
	cout<<"\n\nSum S="<<s;
	
	
}