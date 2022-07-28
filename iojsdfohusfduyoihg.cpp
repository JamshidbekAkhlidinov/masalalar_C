#include<iostream>
#include<map>
using namespace std;
int main(){
	multimap<int,char> st;
	pair<int,char>  zap;
	multimap::iterator it, itb, ite;
	int i; char s;
	for(int i=0; i<10; i++){
		zap.first=i%4;
		zap.second='A'+i;
		st.insert(zap);
	}
	itb=st.lower_bound(1);
	ite=st.upper_bound(1);
	for(it=itb; it!=ite; it++){
		cout<<second<<" ";
		
	}
}