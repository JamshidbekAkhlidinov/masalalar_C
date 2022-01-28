#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n=4,k=0,s=3;
	for(int i=1; i<=n; i++){
		for(int p=1; p<=n; p++){
			cout<<s<<" "; s+=2;
			if(s>29){
				cout<<" 30 31";
				break;
			}
		}
		cout<<endl;
	}
}