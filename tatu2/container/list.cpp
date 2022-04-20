#include <iostream>
#include <list>
#include <stdlib.h>

using namespace std;

int main(){
	
	list <int> list;
	
	int n,a;
	cout<<"n="; cin>>n;
	
	for(int i=1; i<=n; i++){
		a = rand()%10;
		list.push_back(a);
	}
	
	
	for(int i:list){
		cout<<i<<" ";
	}
	cout<<"\n\n";
		
	for(auto it=list.begin(); it!=list.end(); ++it){
		cout<<*it<<" ";
	}
	
	list.remove(2);
	
	cout<<"\n\n";
	
	for(auto it=list.begin(); it!=list.end(); ++it){
		cout<<*it<<" ";
	}
}