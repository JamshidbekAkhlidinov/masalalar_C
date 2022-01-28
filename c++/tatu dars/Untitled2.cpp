#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

template<typename T> 
 T add(T a,T b)
{
	return a+b;
}
/*int add(int a, int b)
{
	return a+b;
}
double add (double a,double b)
{
	return a+b;
}
float add ( float a, float b)
{
	return a+b;
}*/
int main()
{
/*	cout<<"butun sonlar uchun add() funksiyasi:\t"<<add(4,8)<<endl;
	cout<<"haqiqiy sonlar uchun add() funksiyasi:\t"<<add(2.5, 6.3)<<endl;
	cout<<"ikkilangan haqiqiy sonlar uchun add() funksiyasi:\t"<<add(45.2, 678.1)<<endl;*/
	cout<<add<int>(5,9)<<endl;
	cout<<add<float>(53.1, 65.2)<<endl;
	cout<<add<double>(5234.3,354.2)<<endl;
	cout<<add<string>("afds"," hasgf")<<endl;
	return 0;
}
