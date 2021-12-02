#include<iostream>
#include<conio.h>
using namespace std;
int main()
{	int N, i , j, c;  	int A[100]; cin>>N;
 for (i=0; i<N; i++)    
	 cin>>A[i];
	for(i=0; i<N-1; i++)
{
 for(j=N-2;j>=i;j--)

      if (A[j]>A[j+1]) 		{
        c = A[j];
        A[j] = A[j+1];
        A[j+1] = c;
 		}
 }

for (i=0; i<N; i++) 
	cout<<A[i]<<" ";
    getch(); return 0;
}
