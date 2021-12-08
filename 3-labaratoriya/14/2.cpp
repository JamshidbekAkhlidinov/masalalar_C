#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a[10000];
    int n, k = 0, soni = 0;

    cout << "N="; cin >> n;
    a[0] = 2;

    for (int i = 3; i <= n; i = i + 2)
    {
       bool tub = true;
       int ildiz = (int) sqrt(i);

       for (int j = 0; j <= k; j++)
       {
           if (i % a[j] == 0)
           {
              tub = false;
                    break;
           }
           soni++;
           if (ildiz < a[j])
           break;
       }

       if (tub)
       a[++k] = i;
    }
int i;
    for (i = 0; i <= k; i++)
    cout << a[i] << endl;
	cout<<"\n"<<i+1<<" ta tub bor";
    return 0;
}
