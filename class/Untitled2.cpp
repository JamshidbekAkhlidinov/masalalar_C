#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class talaba
{public:
char fam[15];//14-15/0
char ism[15];
int yosh;
float baho;
char guruh[15];
char vil[20];
};
int tal_kir(talaba a[],int n)
{
    for( int i=0;i<n;i++)
{cout<<i+1<<"-talaba"<<endl;
cout<<"fam:";
cin>>a[i].fam;
cout<<"ism:";
cin>>a[i].ism;
cout<<"guruh:";
cin>>a[i].guruh;
cout<<"yosh:";
cin>>a[i].yosh;
cout<<"baho:";
cin>>a[i].baho;
cout<<"viloyat:";
cin>>a[i].vil;
}
cout<<endl;
}
void tal_chiq(talaba a[],int n)
{ cout<<" 2 baho va undan kam baho olgan talabalar:"<<endl;
   for(int i=0;i<n;i++)
//   if(a[i].baho<=2)
cout<<"fam: "<<a[i].fam<<" "<<"ismi: "<<a[i].ism<<" "<<"vil: "<<a[i].vil<<" yoshi: "<<a[i].yosh<<endl;
}

int main()
{ int i,n;
talaba a[25];
cout<<"Talabalar sonini kiriting:";
cin>>n;

tal_kir(a,n);
tal_chiq(a,n);
return 0;
}