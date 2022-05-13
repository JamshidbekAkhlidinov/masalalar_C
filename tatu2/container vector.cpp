#include <iostream>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main(){
	
	vector <string> royxat = {"helo","salom","qalesan","tort"};
	set<string> ikkinchi;
	set<string> uchinchi;
	
	
	for(auto it=royxat.begin(); it!=royxat.end(); ++it){
		string s;
		s = *it;
		if(s.length()%2==0){
			ikkinchi.insert(*it);
		}else{
			uchinchi.insert(*it);
		}
	}
	cout<<"\nIkkinchi toplam\n";
	for(auto it=ikkinchi.begin(); it!=ikkinchi.end(); ++it){
		cout<<*it<<" ";
	}
	cout<<"\n\nUchunchi toplam\n";
	for(auto it=uchinchi.begin(); it!=uchinchi.end(); ++it){
		cout<<*it<<" ";
	}
	
}