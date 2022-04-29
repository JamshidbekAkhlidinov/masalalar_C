#include <iostream>
#include <map>
#include <time.h>

using namespace std;

int main(){
	
	srand(time(0));

	multimap <int,int> map2;
	
	int n;
	cout<<"n=";
	cin>>n;
	

		
	for(int i=1; i<=n; i++){
		map2[i] = rand()%50;
	}
	
		cout<<"\nMap containeri\n";

	
	for(map <int,int>::iterator it=map2.begin(); it!=map2.end(); ++it){
		cout<<(*it).first<<" "<<(*it).second<<"\n";
	}

	
	
	
}