#include <iostream>
#include <string>
using namespace std;
int main(){
	string l;
	cout<<"Satr =>"; 
	getline(cin,l);
	int o = l.length(),m,q=0,w=0;
	char a[o],b[o/2+1],c[o/2+1];
	
	for(int i=0; i<o; i++){
		a[i] = l[i];
		cout<<i+1<<" "<<a[i]<<" \n";
		
		if(i%2==0){
			b[w] = a[i]; 
			w++;
		}else{
			c[q] = a[i]; 
			q++;
		}
	}
cout<<"Toq o'rinda\n";
for(int u=0; u<w; u++){
	cout<<b[u]<<" ";
}
cout<<"\nJuft o'rinda\n";
for(int u=0; u<q; u++){
	cout<<c[u]<<" ";
}
}