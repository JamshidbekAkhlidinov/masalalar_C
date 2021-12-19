#include <iostream>
#include <iomanip>
using namespace std;
class matrissa{
	public:
		int m,n,l;	
		void qiymat_berish(int a, int b, int c){
		m = a; n=b; l=c;
		int s[a+1][b+1];		
		for(int i=1; i<=a; i++){
			for(int j=1; j<=b; j++){
				s[i][j] = rand()%20+c;
				cout<<setw(3)<<s[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
		cout<<endl;
	}
	
};
int main(){
	matrissa mat;
	mat.qiymat_berish(10,10,0);
	int c;
	cout<<"Qoshish \nC="; cin>>c;
	mat.qiymat_berish(10,10,c);
	

}