#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int k[n],max,juft[100],o=0;
	for(int i=0;i<n; i++){
		cin>>k[i];
	}
	for(int i=0;i<n; i++){
		if(k[i]%2==0){
			juft[o] = k[i];
			o++;
		}
	}
	max = juft[0];
	for(int i=0; i<o; i++){
		if(max<juft[i]){
			max=juft[i];
		}
	}
	if(o>0){
	cout<<max;
	}else{
		cout<<-1;
	}
		
}