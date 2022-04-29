#include <iostream>
#include <set>
#include <time.h>

using namespace std;

int main(){
	
	srand(time(0));
	
	set <int> set;
	multiset <int> multiset;
	
	int n;
	cout<<"n=";
	cin>>n;
	

		
	for(int i=1; i<=n; i++){
		set.insert(rand()%30);
		multiset.insert(rand()%30);
	}
	
		cout<<"\nSet containeri\n";
	
	for(auto it=set.begin(); it!=set.end(); it++){
		cout<<*it<<" ";
	}

		cout<<"\nMultiSet containeri\n";

	for(auto it=multiset.begin(); it!=multiset.end(); it++){
		cout<<*it<<" ";
	}	
	
	
}