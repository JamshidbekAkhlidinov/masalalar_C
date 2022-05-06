#include <iostream>
#include <set>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
	
	set<float> toplam;
	set<int> toplam2;
	set<float> toplam3;
	
	int n;
	cout<<"n="; cin>>n;
	
	for(int i=1; i<=n; i++){
		float fl = 3+((float(rand())/float(RAND_MAX) * 30));
		toplam.insert(fl);
	}
	
	cout<<"Hammasi\n";
	for(auto it=toplam.begin(); it!=toplam.end(); ++it){
		cout<<*it<<setw(10);
		int k = *it;
		float j = *it-k;
		toplam2.insert(k);
		toplam3.insert(j);
	}
		

	cout<<"\n\nButun qismi\n";
	for(auto it=toplam2.begin(); it!=toplam2.end(); ++it){
		cout<<*it<<setw(3);
	
	}
	
	cout<<"\n\nKasr qismi\n";
	for(auto it=toplam3.begin(); it!=toplam3.end(); ++it){
		cout<<setw(10)<<*it;
	
	}
}