#include <iostream>
using namespace std;
class Nuqta{
	int x,y;
	public:
		Nuqta(){
			x = 0;
		}
		Nuqta(int _x, int _y){
			x = _x; y = _y;
		}
		void Nuqta_Qiymati(int &_x, int &_y){
			_x=x; _y=y;
		}
		Nuqta operator+(Nuqta &ob);
		Nuqta operator-(Nuqta &ob);
};

Nuqta Nuqta::operator+(Nuqta &ob){
	Nuqta OraliqOb;
	OraliqOb.x = x+ob.x;
	OraliqOb.y = y+ob.y;
	return OraliqOb;
}

Nuqta Nuqta::operator-(Nuqta &ob){
	Nuqta OraliqOb;
	OraliqOb.x = x-ob.x;
	OraliqOb.y = y-ob.y;
	return OraliqOb;
}
int main(){
	int x,y;
	Nuqta A(100,200),B(400,200);
	Nuqta c,d;
	c = A+B;
	d = A-B;
	c.Nuqta_Qiymati(x,y);
	cout<<" C=A+B "	<<" C.x="<<x<<" C.y="<<y<<endl;
	d.Nuqta_Qiymati(x,y);
	cout<<" D=A-B "	<<" C.x="<<x<<" C.y="<<y;

}







