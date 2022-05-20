#include <iostream>
#include <algorithm>

using namespace std;
int main(){
	int *p;
	int n,i;
	cout<<"n="; cin>>n;
	
	p = (int*)calloc(n,sizeof(int));
	for(i=1; i<=n; i++){
		p[i] = rand()%30;
		cout<<p[i]<<" ";
	}
}