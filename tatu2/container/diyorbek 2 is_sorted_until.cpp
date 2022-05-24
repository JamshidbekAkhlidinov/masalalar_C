#include <iostream>
#include <list>
#include <algorithm>
#include <time.h>

using namespace std;

int main(){
	srand(time(0));
	list<int> list;
	int n;
	cout<<"N="; cin>>n;
	
	for(int i=1; i<=n; i++){
		int r = rand()%30;
		list.push_back(r);
	}
	for(int k: list)
		cout<<k<<" ";
	
	int d = *is_sorted_until(list.begin(), list.end());

	
	cout<<"\n\nO'sish buzulishidan oldingi element d="<<d;
	
	
}