#include <iostream>
#include <deque>
using namespace std;

int main(){
	deque<char> deq;
	
	string name;
	cout<<"name: "; cin>>name;
	
	
	for(int d=0; d<=name.size(); d++){
	
		if(name[d]=='a' or name[d]=='e' or name[d]=='i' or name[d]=='u' or name[d]=='o'){
			deq.push_front(name[d]);
		}else{
			deq.push_back(name[d]);
		}	
	
	}
	
	for(int k=0; k<=name.size(); k++){
		cout<<deq.at(k)<<" ";
	}
	
	
}