#include <iostream>
#include <deque>
using namespace std;
int main(){
	deque<int> var;
	int n;
	cout<<"n="; cin>>n;
	cout<<"\nHamma elemetlar\n";
	for(int i=1; i<=n; i++){
		var[i] = rand()%20;
		cout<<var[i]<<" ";
	}
	cout<<"\n\nSum\n";
	int soni=0,sum=0;
	
	for(int i=1; i<=n; i++){
		soni++;
		sum+=var[i];
		if(soni==2){
			cout<<"Sum "<<var[i-1]<<"+"<<var[i]<<"="<<sum<<", ";
			soni = 0;
			sum = 0;
		}
	}
}