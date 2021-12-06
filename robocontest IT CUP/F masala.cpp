#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main(){
	int q,w,e,f,k,i,j,s;
	cin>>q;
	int r[q];
	for(w=0;w<q; w++){
		cin>>r[w];
//	r[w] = rand ()%30;
//	cout<<r[w]<<" ";
	}
	
   for (i = 0; i < q-1; i ++){
    for (j = q-2; j >=  i ; j --){
      if ( r[j] > r[j+1] ) {
      	k++;
        s = r[j];
        r[j] = r[j+1];
        r[j+1] = s;
        }
     }
}
  cout<<endl;
	for(int i=0; i<q; i++){
//		cout<<r[i]<<" ";
	}
	
	cout<<k*2;

	

}