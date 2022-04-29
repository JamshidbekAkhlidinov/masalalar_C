#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main(){
	srand(time(0));
	
	vector <int> sonlar;
	int n;
	cout<<"n="; cin>>n;
	
	for(int i=1; i<=n; i++){
		sonlar[i] = rand()%30; 
		cout<<sonlar.at(i)<<" ";
	}	
	
	
	
}