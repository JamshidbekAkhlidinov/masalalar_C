#include<iostream>
#include<set>
#include <iterator>
using namespace std;
int main(){
	multiset<string> t1, t2, t3;
	set<string> st1, st2;
	int n = 5;
	string s;
	freopen("input.txt", "r", stdin);
	while(n--)
	{
		cin >> s;
		t1.insert(s);	
	}
	cout << "Elemetnlar fayldan o'qib olindi!\n";
	int i = 0;
	
	for(auto it = t1.begin(); it != t1.end(); it++)
	{
		if(i < 2)
		t2.insert(*it);
		else 
		t3.insert(*it);
		i++;
		if(i == 5)
		break;
		
	}
	
	for(auto it = t2.begin(); it != t2.end(); it++)
	{
		st1.insert(*it);
	}
	for(auto it = t3.begin(); it != t3.end(); it++)
	{
		st2.insert(*it);
	}
	
	cout << "To'plam - 2 elementlari : ";
	for(auto j: t2)
	cout << j << " ";
	cout << endl << "To'plam - 3 elementlari : ";
	for(auto j: t3)
	cout << j << " ";
	
	cout << endl << "2 - to'plamni bir xil qiymatlari o'chirilgandagi ko'rinishi : ";
	for(auto j: st1)
	cout << j << " ";
	
	cout << endl << "3 - to'plamni bir xil qiymatlari o'chirilgandagi ko'rinishi : ";;
	for(auto j: st2)
	cout << j << " ";
	
}