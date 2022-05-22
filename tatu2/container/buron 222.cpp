#include <iostream>	
#include <list>
#include <algorithm>
using namespace std;

int main(){
	list<int> kontainer;
	int n;
	cout<<"n="; cin>>n;
	for(int i=1; i<=n; i++){
		kontainer.push_back(rand()%30);
	}
	
	int s=0;
	for(auto it = kontainer.begin(); it!= kontainer.end(); it++)
        {
          cout<< *it<<" ";
          s +=*it;
        }
	

	cout<<"\nYigindisi: "<<s;
}