#include <iostream>
#include <set>
using namespace std;

int main(){
	
	int n;;
	cin>>n;
	set<int> set;
	for(int i=1; i<=n; i++){
		int l;
		cin>>l;
		set.insert(l);
	}

	int soni=0;
	for(auto it=set.rbegin(); it!=set.rend(); it++){
		cout<<*it<<" ";
		soni++;
		if(soni==3){
			break;
		}
	}
	
	

	
}