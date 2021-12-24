#include <iostream>
using namespace std;
int main(){
	string s,d,q;
	string m[300],k[300];
	int i,n,b=0;
	getline(cin,s); 
	s +=" ";
	for(i=0; i<=s.length(); i++){
		if(s[i]==' '){
			m[b] +=d; 
			b++;
			d = "";
		}else{
			d +=s[i];
		}
	}
	int j=0,t=0;
	for(int k=0; k<b; k++){
		cout<<"m["<<k<<"]="<<m[k]<<" "<<m[k].length()<<endl;
		
	}
	
	int I,J,l[100],r=0;
	for(I = 2; I <= 100; I++) {
        for(J = 2; J <= (I / 2); J++) {
            if(I % J == 0) {
                J = I;
                break;
            }
        }
        if(J != I) {
//            cout << I << " ";
            l[r] = I;
            r++;
        }
    }
	int u=0;
	for(int k=0; k<=r; k++){
		if(m[k].length()==l[k]){
			u++;
		}
	}
	cout<<u<<" ta tub soz bor";
	
	
}
