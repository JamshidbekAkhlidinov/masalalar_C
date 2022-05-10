#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	string toplam1S = "Toshlent axborot texnologiyalari universiteti";
	string toplam2S = "Dasturiy injineringi fakulteti";

	vector<char> toplam1 (toplam1S.begin(), toplam1S.end());
	vector<char> toplam2 (toplam2S.begin(), toplam2S.end());
	vector<char> toplam3;
	
	cout<<"Birinchi toplam\n";
	int soni = 0;
	for(auto it= toplam1.begin(); it!=toplam1.end(); ++it) {
		cout<<*it;
		if(*it == ' '){
			soni++;
		}
		if(soni!=2 and soni<=2){
			toplam3.push_back(*it);
		}
	}
	cout<<"\n\nikkinchi toplam\n";
	toplam3.push_back(' ');
	soni = 0;
	for(auto it= toplam2.begin(); it!=toplam2.end(); ++it) {
		cout<<*it;
		if(*it == ' '){
			soni++;
		}
		if(soni!=1 and soni<=1){
			toplam3.push_back(*it);
		}
		
	}
	
	
	
	
	cout<<"\n\nUchinchi toplam\n";
	for(auto it= toplam3.begin(); it!=toplam3.end(); ++it) {
		cout<<*it;
	}
	
	
	
}