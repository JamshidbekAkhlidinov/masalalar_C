#include<iostream>
#include<map>
using namespace std;
int main(){
	map <int,char> st;
	pair<int,char> zap;
	int i; char s;
	for(int i=0; i<10; i++){
		zap.first=i;
		zap.second='A'+i;
		st.insert(zap);
	}
	cout<<"\nst[1]="<<st[1];
}