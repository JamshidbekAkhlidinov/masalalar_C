#include <iostream>
using namespace std;

void Digitcountsum(int k){
	int n, s=0;
while(k!=0){
	s = s + k % 10;
	k = k /10;
	n++;
}
cout<<"n => "<<n;
cout<<"\nS => "<<s;
	
}

int main(){
	int k;
	cout<<"k=>"; cin>>k;
	Digitcountsum(k);
	
}