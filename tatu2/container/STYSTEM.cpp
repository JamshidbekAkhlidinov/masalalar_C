#include <iostream>
#include <vector>
using namespace std;

int main(){
	system("COLOR 02");
	vector <int> array;
	int n; cout<<"n=";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		array.push_back(rand());
		cout<<array.at(i-1)<<" \t";
	}
	
	system("pause");
}