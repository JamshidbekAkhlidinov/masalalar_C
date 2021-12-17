#include <iostream>
using namespace std;
class tip{
	public:
void func(int n){
	cout<<"int "<<n<<endl;
}
void func(double n){
	cout<<"double "<<n<<endl;
}
void func(char n){
	cout<<"char "<<n<<endl;
}
};

int main(){
	tip tip;
	tip.func(12.2);
	tip.func(12);
	tip.func('a');
	
	
}