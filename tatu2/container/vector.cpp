#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector <int> arr;
	int n;
	cout<<"n=";
	cin>>n;
	
	for(int i=0; i<n; i++){
		arr.push_back(rand()%30);
		cout<<"a["<<i+1<<"]="<<arr.at(i)<<"\n";
	}
	
	
	cout<<"\nToq indexli elemntlari\n";
	for(int i=0; i<n; i++){
		if(i%2==0)
		cout<<"a["<<i+1<<"]="<<arr.at(i)<<"\n";
	}
	
}