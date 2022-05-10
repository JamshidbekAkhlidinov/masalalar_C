#include <iostream>
#include <vector>

using namespace std;


int main(){

	vector <char> toplam = {'A','b','C','d','e','F'},toplam2, toplam3;
	
	cout<<"Asosiy toplam\n";
	for(auto it = toplam.begin(); it!=toplam.end(); ++it){
		cout<<*it<<" ";
	}
	
	cout<<"\n\nO'zgargan toplam\n";
	for(auto it = toplam.begin(); it!=toplam.end(); ++it){
		int c = *it;
        if (islower(c)){
            *it = toupper(*it);
        	toplam2.push_back(*it);
		}
        else {
            *it = tolower(*it); 
				toplam3.push_back(*it);
		}
		cout<<*it<<" ";
	}
	
	cout<<"\n\nAjralgan toplam\n";
	for(auto it = toplam2.begin(); it!=toplam2.end(); ++it){
		cout<<*it<<" ";
	}
	cout<<"\n";
	for(auto it = toplam3.begin(); it!=toplam3.end(); ++it){
		cout<<*it<<" ";
	}



}