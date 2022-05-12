//1 дан 100 гача булган сонлардан 2 ва 5 га 
//булинмайдиган сонларни екранга чикариш дастурини тузинг

#include <iostream>
using namespace std;
int main(){
	
	int n = 100;
	cout<<"2 va 5 ga bolinmaydigan sonlar\n";
	for(int i=1; i<=n;i++){
		if(i%2!=0 and i%5!=0){
			cout<<i<<" ";
		}
	}
	
}