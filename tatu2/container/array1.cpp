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
	
		int min = sonlar.at(1);
	
		for(int i=1; i<=30; i++){
			if(min>sonlar.at(i)){
				min = sonlar.at(i); 
			}
		}
		
		cout<<"\n\nMin "<<min;
	
}