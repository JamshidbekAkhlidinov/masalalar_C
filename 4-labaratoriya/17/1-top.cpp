#include <iostream>
#include <cmath>
using namespace std;
void turi(int a, int b, int c){
	if(a==b or a==c or b==c){
		cout<<"Teng yonli \n";
	}else if(a!=b or a!=c or b!=c){
		cout<<"Turli tomonli \n";
	}else if(a==b==c){
		cout<<"Teng tomonli\n";
	}
}
void yuzi(int a, int b, int c){
	float p,s;
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"S="<<s;
}

void peremetr(int a, int b, int c){
	float p;
	p = a+b+c;
	cout<<"\nP="<<p;
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	turi(a,b,c);
	yuzi(a,b,c);
	peremetr(a,b,c);
	
}