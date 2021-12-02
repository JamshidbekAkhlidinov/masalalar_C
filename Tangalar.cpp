#include <iostream>
using namespace std;

int main(){
	int x,s=0,f[20],k;
	cin>>x;
		for(int i=1; i<=3; i++){
			if(x>=4){
			x = x - i;
			s += i*x;
		}else{
			s +=1;
		}
	}
	cout<<s;
}