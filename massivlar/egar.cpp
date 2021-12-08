#include<bits/stdc++.h>
using namespace std;
int main()
{
const int n=2,m=2;
int a[n][m], p, t, k, p1=0;
for (int i=0; i<n; i++){
for (int j=0; j<m; j++) {
a[i][j] = rand()%30;
	cout<<setw(5)<<a[i][j] ;
	}
	cout<<endl;
}



for (int i=0; i<n; i++)
{
t=0;
p=a[i][0];k=0;
for (int j=1;j<m;j++)
if (p<a[i][j]){p=a[i][j];k=j;
} 

for (int l=0;l<n;l++)
if (p<a[l][k])t=t+1;
if (t==n-1){p1=1; cout<<i<<" "<<k<<" "<<p;}
}
if (!p1)cout << " Egar nuqta yoq ";
return 0;
} 
