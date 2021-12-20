#include<iostream>
#include <cmath>
using namespace std;
class nuqta{
	public:
		int x1,y1,x2,y2,x3,y3;
	public:
nuqta(int x1,int y1, int x2, int y2){
	float d;
	d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	cout<<"Masofa="<<d<<endl;
} 
 nuqta(int x1,int y1,int x2,int y2,int x3,int y3){
		float a,b,c,k,p;
		a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		b=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
		c=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
		p=(a+b+c)/2;
		k=sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<"Yuza="<<k<<endl;
    }
};
int main(){
	
	int x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
//	nuqta nuqta();
//nuqta nuqta(x1,y1,x2,y2);
nuqta nuqta(x1,y1,x2,y2,x3,y3);

}