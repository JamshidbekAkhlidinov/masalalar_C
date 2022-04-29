#include <iostream>
#include <array>

using namespace std;

int main(){
	
	array <int, 8> arr;
	
	for(int i=1; i<=8; i++){
		arr[i] = rand()%30;
		cout<<"a["<<i<<"]="<<arr[i]<<"\n";
	}
	cout<<"\nToq indexli elemntlari\n";
	for(int i=1; i<=8; i++){
		if(i%2==1)
		cout<<"a["<<i<<"]="<<arr[i]<<"\n";
	}
	
}