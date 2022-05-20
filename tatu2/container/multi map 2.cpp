#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
	multimap <int,int> k;
	int n;
	cout<<"n=";
	cin>>n;
	for(int i=1; i<=n; i++){
		int p = 1+rand()%10;
		k.insert(pair<int, int>(i,p));
		cout<<p<<" ";
	}
	cout<<"\n\n";
	int s1=0;
	int s2=1;
	
	for(auto it = k.begin(); it!=k.end(); ++it){
		cout<<"["<<it->first<<"]= ";
		cout<<it->second<<" \n";
		s1 +=it->second;	
		s2 *=it->second;
	}

	cout<<"\n\nYig'indi = "<<s1;
	cout<<"\nKo'paytma = "<<s2;

	
}