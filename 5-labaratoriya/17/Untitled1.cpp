#include <iostream>
using namespace std;
int main(){
	string a="diyorbek";
	string b="rasulov";
	int p=0,t=1;
	for(int i=0; i<a.length(); i++){
		for(int j=0; j<b.length(); j++){
			if(a[i]==b[j]){
				p++;
			}
		}
		if(p>1){
			t++; p=0;
		}
	}
	cout<<t;
}