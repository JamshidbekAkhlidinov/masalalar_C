#include <iostream>
using namespace std;
int main(){
	
	int n,m,i=0;
	cin>>n>>m;
	
	while(n>=m){
		i++;
		n -=m;
	}
	
		cout<<n<<" "<<i<<"\n";
	
	main();
	
}