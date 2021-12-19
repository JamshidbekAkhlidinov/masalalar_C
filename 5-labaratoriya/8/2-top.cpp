#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	string s[5][5]; int t[20];
	ifstream oqi("output2.txt");
	ofstream yoz("input2.bin");
	
	for(int i=1; i<=4; i++){
		for(int j=1; j<=4; j++){
			oqi>>s[i][j];
			if(i==rand()%4) s[i][j] = "0";
			cout<<s[i][j]<<" ";
			yoz<<s[i][j]<<" ";
		}
		cout<<endl;
		yoz<<endl;
	}
}
	