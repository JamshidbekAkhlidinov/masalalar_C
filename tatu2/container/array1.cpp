#include <iostream>
#include <array>
#include <time.h>
using namespace std;
int main(){
	srand(time(0));
	array <int,31> sonlar;
	for(int i=1; i<=30; i++){
		sonlar[i] = rand()%30; 
		cout<<sonlar.at(i)<<" ";
	}	
	cout<<"\n\nOxirgi elementi: "<<sonlar.back();	
}