#include <iostream>
#include <queue>
#include <cmath>
using namespace std;


int main(){
	int n;
	cin>>n;
	priority_queue <int> navbat,tub,murakkab;
	int soni;
	
	for(int i=1; i<=n; i++){
		int r = rand()%100;
		navbat.push(r);
		cout<<r<<" ";	
	}
	
	cout<<"\n";
		
	while (!navbat.empty()) {
        int kl = navbat.top();
        soni = 0;
	    for(int k=2; k<n; k++){
			if(kl%k==0){
				soni++;
			}
		}
		if(soni==0){
			tub.push(kl);
		}
		 navbat.pop();

        
    }
    
    cout<<"\nTub sonlar\n";
    while (!tub.empty()) {
        int kl = tub.top();
       	cout<<kl<<" ";
		 tub.pop();

        
    }
	
	
	

}