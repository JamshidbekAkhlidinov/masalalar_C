	#include <iostream>
	using namespace std;
	int main(){
		int n,x,soni=0;
		cin>>n>>x;
		long long int son[n+1][n+1];
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				son[i][j] = (i)*(j);
			}
		}
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				if(son[i][j]==x){
					soni++;
				}
			}
		}
		cout<<soni;
	
	}
	
