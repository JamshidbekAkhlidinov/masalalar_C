#include<bits/stdc++.h>
#include<complex>
#include<valarray>
using namespace std;
int main() {
    valarray<int> a(200);
    for(int i=19; i<a.size(); i++){
        a[i]=i;
        cout<<a[i]<<" ";
    } cout<<endl;
    size_t boshlash = 19 ;
    size_t uzunligi[]={2,3};
    size_t qadam[]={7,2};
    gslice myg(boshlash, valarray<size_t>(uzunligi,2), valarray<size_t> (qadam,2));
    valarray<int> massiv=a[myg];
    for(int i=0; i<massiv.size(); i++){
        cout<<massiv[i]<<" ";
    }
}