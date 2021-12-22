#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
	ifstream oqi("output.txt");
	ofstream yoz("input.txt");
	string soz,lp;
	getline(oqi,soz);
	string massiv[30];
	int k=0;
	for(int i=0; i<=soz.length(); i++){
		if(soz[i]==' '){
			massiv[k] = lp;
			k++;
			lp = "";
		}else{
			lp +=soz[i]; 
		}
		}

for(int t=0; t<=k; t++){
cout<<massiv[t]<<" ";	
}

cout<<"\n\nO'chirilgan satr\n";

for(int t=0; t<=k; t++){
//cout<<massiv[t]<<" ";	
//yoz<<massiv[t]<<" ";

if(massiv[t].length()%2==1){
	cout<<massiv[t]<<endl;
	yoz<<massiv[t]<<endl;
}


}
	
}