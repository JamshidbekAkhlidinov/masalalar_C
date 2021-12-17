#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	int a[1000],i=1;string s[1000],l; int t=1;;
	ifstream oqi("output2.txt");
	int sum=0;
	while(true){
	getline(oqi,s[i]);
	a[i]=stoi(s[i]);
	cout<<a[i]<<"\n";
	if(i%2==0) {
	sum = sum+a[i];
}
	i++;
  if (oqi.eof())
      break;
}
cout<<"\n\nSum= "<<sum;
}