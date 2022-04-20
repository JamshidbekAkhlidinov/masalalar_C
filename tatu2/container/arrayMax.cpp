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
	
	int max = sonlar.at(1);

	for(int i=1; i<=30; i++){
		if(max<sonlar.at(i)){
			max = sonlar.at(i); 
		}
	}
	
	cout<<"\n\nMax "<<max;
	
}