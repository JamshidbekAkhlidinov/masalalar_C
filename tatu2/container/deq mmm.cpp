#include <iostream>
#include <deque>
using namespace std;
int main(){
	deque <int> deq;
	int n; 
	cout<<"n=";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		int k = 10-rand()%30;
		deq.push_back(k);
	}
	int s = 0;
	for(auto it = deq.begin(); it!=deq.end(); it++){
		cout<<*it<<" ";
		if(*it<0){
			s+=*it;
		}
	}
	cout<<"\nManfiylar yigindisi S="<<s;
}