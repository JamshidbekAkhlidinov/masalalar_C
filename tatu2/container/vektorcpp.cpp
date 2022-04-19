
#include <vector>
#include <iostream>
#include <stdlib.h>
#include<windows.h>


using namespace std;
int main(){
	
	system("Color 02");
	
	vector <int> deff;
	int d;
	cout<<"N=";
	cin>>d;
	for(int i=1; i<=d; i++){
		deff.push_back(rand()%100);
	}
	
	cout<<d<<" dan kichkina sonlar \n\n";
	
	for(int i=0; i<deff.size(); i++){
		if(deff.at(i)<d)
		cout<<deff.at(i)<<" \t";
	}
	cout<<"\n\n";
	main();
		

}