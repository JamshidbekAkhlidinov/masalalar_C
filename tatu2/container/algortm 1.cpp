#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	vector <int> k,f;
	int n;
	cout<<"n=";
	cin>>n;
	for(int i=1; i<=n; i++){
		int p = rand()%10;
		k.push_back(p);
		cout<<p<<" ";
	}
	cout<<"\n\nQidirish uchun kiriting! s = ";
	int s;
	cin>>s;
	f.push_back(s);

	auto it = search(k.begin(),k.end(),f.begin(),f.end());
	if(it!=k.end())	
		cout<<it-k.begin()+1<<"-orinda joylashgan\n";
	else
		cout<<"Mavjud emas";

	
}