#include<iostream>
#include<array>
#include<iterator>
using namespace std;
int main(){
	array<int,8> myarray={2,5,7,9,10,48,100,2022};
	cout<<"Juft elementlari => ";
	for( auto it = myarray.begin(); it!=myarray.end(); it++)
		if(*it%2==0) cout<<" "<<*it;
	
	return 0;
}