#include <iostream>
#include <valarray>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int n;
	cout<<"n="; cin>>n;
	valarray<int> val(n);
	
	for(int i=0; i<n; i++){
		val[i] = rand()%1000;
		cout<<val[i]<<" ";
	}
	cout<<endl;
	
	cout<<"\nFunksiya orqali";	
	cout<<"\nMax =>"<<val.max();
	cout<<"\nMin =>"<<val.min();
	
	int max = val[0];
	int min = val[0];
	for(int i=0; i<n; i++){
		if(max<val[i])
			max = val[i];
	}
	for(int i=0; i<n; i++){
		if(min>val[i])
			min = val[i];
	}
	
	cout<<"\n\nAlgoritm orqali";
	cout<<"\nMax =>"<<max;
	cout<<"\nMin =>"<<min;
	
	
}