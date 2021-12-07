#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main(){
	int a,b;
	ofstream yoz("output.txt");
	cout<<"a ="; cin>>a;
	cout<<"b ="; cin>>b;
	int v[a+1][b+1];
	for(int q=1; q<=a; q++){
		for(int w=1; w<=b; w++){
			v[q][w] = rand()%1000;
			cout<<setw(5)<<v[q][w];		
			yoz<<setw(5)<<v[q][w];
		}
		cout<<endl;
		yoz<<endl;
	}
	
	int max = v[1][1];
	int min = v[1][1];	
	for(int q=1; q<=a; q++){
		for(int w=1; w<=b; w++){
			if(v[q][w]>max){
				max = v[q][w];
			}
		}
	}

	for(int q=1; q<=a; q++){
		for(int w=1; w<=b; w++){
			if(v[q][w]<min){
				min = v[q][w];
			}
		}
	}
	
	cout<<"\nMax=>"<<max;
	cout<<"\nMin=>"<<min;
	yoz<<"\nMax="<<max;
	yoz<<"\nMin="<<min;
	
	
}