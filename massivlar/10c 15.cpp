#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main(){
	int n,m;
	cout<<"n=>";cin>>n;
	cout<<"m=>";cin>>m;
	int k[n][m];
	for(int i=0; i<n; i++){
		for(int l=0; l<m; l++){
			k[i][l]	 = -30+rand()%300;
			cout<<setw(5)<<k[i][l];
		}
		cout<<endl;
	}
	int q,w;
		int min = k[0][0];
		for(int i=0; i<n; i++){
		for(int l=0; l<m; l++){
			if(k[i][l]<min){
				min =  k[i][l];
				q = i; w = l;
			}	
		}
	}

cout<<"\nk["<<q<<"]["<<w<<"]="<<min;
	

}