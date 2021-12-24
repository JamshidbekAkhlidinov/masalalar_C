#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
	ifstream a("output1.txt");
	ifstream b("output2.txt");
	string s1,s2;
	getline(a,s1);
	getline(b,s2);
	
	ofstream ca("output1.txt");
	ofstream da("output2.txt");
	
	ca<<s2;
	da<<s1;
	
	
	
}