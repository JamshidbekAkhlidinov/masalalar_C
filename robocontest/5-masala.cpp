#include <iostream>

using namespace std;

int main(){
	int n,m=0,r,s=0,v[20];
		int w,q;
	cin>>n;
	int k[n];
	for(int i=1;i<=n; i++){
		cin>>k[i];
	}
	for(int i=1;i<=n; i++){
		for(int p=1;p<=n; p++){
			if(k[i]==k[p])	{
				m++;
			}
		}
		if(m>=2){
			r++;
			v[r] = m;
		}
		int max = v[1];
		for(int y=1; y<=r; y++){
			if(max<v[y]){
				max = v[y];
			}
		}
		
		w = max / r;
		q = max % r;
		
		m=0;
		

		
	}
	
	cout<<w+q;
	
	
}