#include <iostream>	
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> kontainer;
	int n;
	cout<<"n="; cin>>n;
	for(int i=1; i<=n; i++){
		kontainer.push_back(rand()%30);
	}
	
	for_each(kontainer.begin(), kontainer.end(),[](auto attack)
        {
          cout<< attack<<" ";
        }
	);

	
}