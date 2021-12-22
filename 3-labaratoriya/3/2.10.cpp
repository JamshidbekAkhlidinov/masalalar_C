#include <iostream>

using namespace std;

int main(){
	char a[25], b[25], c[25];
	cin.getline(a, 25);
	cin.getline(b, 25);
	
	a[1] = b[2];
	
	for (int i = 0; i < strlen(a); i++)
	 {
	 	c[i] = a[i];
	 }
	
	cout << c;
}
	