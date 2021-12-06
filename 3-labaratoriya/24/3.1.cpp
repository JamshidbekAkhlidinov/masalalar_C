#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int p[n+1][2];
		for(int l=1; l<=2; l++){
			p[w][l] = rand()%20;
			cout<<p[w][l]<<" ";
		}
		cout<<endl;
	}
	
int max = p[1][1],max2 = p[1][1];
int o,q;

for(int w=1; w<=n; w++){
		for(int l=1; l<=2; l++){
			if(max<p[w][l]){
				max = p[w][l];
				o = w; q =l;
			}
		}
	}
	
	cout<<"\n\n"<<max;
	
	p[o][q] = 0;
	
	for(int w=1; w<=n; w++){
		for(int l=1; l<=2; l++){
			if(max<p[w][l]){
				max2 = p[w][l];
			}
		}
	}

	cout<<"\n\nMax->X=>"<<max<<" Max-Y=>"<<max2;

