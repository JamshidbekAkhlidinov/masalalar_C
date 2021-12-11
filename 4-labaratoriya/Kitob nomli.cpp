#include<string.h>
#include<iostream>
using namespace std;
const int n=2;
class Kitob{
	private: 
	string nomi;
 	float narxi;
	public:
	friend float qidirMaxNarx(Kitob k[]);
	void setNarxi(float Narxi){
		narxi=Narxi;
	}
	float getNarxi(){
	return narxi;
	}
	void setNomi(string Nomi){
	nomi=Nomi;
	}
	string getNomi(){
		return nomi;
	}
};
float qidirMaxNarx(Kitob k[]){
	cout<<"Eng qimmat kitob narxi:";
	int max=k[0].narxi;
	for(int i=0;i<n;i++){
	 if(k[i].narxi>max)
		max=k[i].narxi;
	}
 return max; 
}
int main(){
Kitob k[n];
string nomi;
int narxi;
for(int i=0;i<n;i++)
{
cin>>nomi;
cin>>narxi;
k[i].setNomi(nomi);
k[i].setNarxi(narxi);
}
cout<<qidirMaxNarx(k);
}