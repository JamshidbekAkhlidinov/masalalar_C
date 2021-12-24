#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main(){
	string c,d;
	ifstream oqi("input.txt");
	ofstream yoz("output.txt");
	cout<<"a ="; getline(oqi,c); cout<<c<<endl;
	cout<<"b ="; getline(oqi,d); cout<<d<<endl;
	int a,b;
	a = stoi(c);
	b = stoi(d);
	
	int v[a+1][b+1];
	for(int q=1; q<=a; q++){
		for(int w=1; w<=b; w++){
			v[q][w] = rand()%1000;
			cout<<setw(5)<<v[q][w];		
		}
		cout<<endl;
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
	cout<<"\nMax+Min="<<max+min;
	yoz<<max+min;

	
	
}