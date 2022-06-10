#include<bits/stdc++.h>
#include<complex>
#include<valarray>
using namespace std;
int main() {
    valarray<int> a(100);
    for(int i=0; i<a.size(); i++){
        a[i]=i;
        cout<<a[i]<<" ";
    } cout<<endl;
valarray <int> a1=a[slice(2,10,6)];
    for(int i=0; i<a1.size(); i++){
        cout<<a1[i]<<" ";
    }

}