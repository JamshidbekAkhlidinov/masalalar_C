#include <iostream>
#include <set>
using namespace std;

int main(){
		
	string toplam1 = "Toshlent Axborot Texnologiyalari Universiteti";
	int katta=0,kichik=0;
	cout<<"Matn =>"<<toplam1<<"\n";
	
	for(int i=0; i<=toplam1.length(); i++){
		if(isupper(toplam1[i])){
			katta++;
		}else{
			kichik++;
		}
	}
	set <int> kattaT;
	set <int> kichikT;
	
	for(int i=1; i<=katta;i++){
		kattaT.insert(rand()%30);
	}
	
	for(int i=1; i<=kichik;i++){
		kichikT.insert(rand()%30);
	}
	cout<<"\nKatta harflar sonicha toplam\n";
	for(auto it = kattaT.begin(); it!=kattaT.end();++it){
		cout<<*it<<" ";
	}
	cout<<"\n\nKichik harflar sonicha toplam\n";
	for(auto it = kichikT.begin(); it!=kichikT.end();++it){
		cout<<*it<<" ";
	}
	
}