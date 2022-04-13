#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream yoz("test.txt");
	int n,s=0;
	cin>>n;
	
	for (int i=1; i<=n; i++){
		for(int k=1; k<=i; k++){
			if(i%k==0){
				s+=k;	
			}
		}
		cout<<i<<" bluvchilari yigindisi "<<s<<"\n\n";
		yoz<<i<<" bluvchilari yigindisi "<<s<<"\n\n";
		s = 0;
	}
	// cout<<s;
	
}