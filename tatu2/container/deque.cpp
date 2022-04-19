#include <iostream>
#include <deque>

using namespace std;

int main(){

system("Color 02");

	deque<int> deff;
	
	int n;
	cout<<"N=";
	cin>>n;

	
	for(int i=1; i<=n; i++){
		if(i%2==0)
		deff.push_front(i);
		else
		deff.push_back(i);
			
		
	}
		
	for(int i=0; i<deff.size(); i++){
		cout<<deff.at(i)<<"\t";
	}
	
	cout<<"\n\n";
	
	main();
		
		
}
