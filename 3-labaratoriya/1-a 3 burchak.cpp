#include <iostream>
using namespace std;
float tashqiR(float c){
	float R;
	R = c/2;
	return R;
}
float ichkiR(float a,float b, float c){
	float R;
	R = a*b/c;
	return R;
}
int main(){
	float a,b,c;
	cout<<"A =>";cin>>a;
	cout<<"B =>";cin>>b;
	cout<<"C =>";cin>>c;
		cout<<"Tashqi R="<<tashqiR(c);
	cout<<"\nIchki R="<<ichkiR(a,b,c);
}