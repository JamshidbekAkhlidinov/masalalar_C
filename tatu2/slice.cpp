#include <iostream>     // std::cout
#include <cstddef>      // std::size_t
#include <valarray>     // std::valarray, std::slice
using namespace std;
int main ()
{
  valarray<int> foo (9);
  for (int i=0; i<9; ++i) foo[i]=i;  
  cout<<" foo to'ldirilgan elementlari : "<<endl;       //  0  1  2  3  4  5  6  7  8
         for (size_t n=0; n<foo.size(); n++)
    cout << ' ' << foo[n];
  cout <<endl<<endl; 
                                    
  slice myslice=slice(1,3,2);     //    1-indexdan 2 qadam farq bilan 3 ta element o'zlashtir
  cout<<" myslice elementlari: 1,3, 5 "<<endl;
  
  cout <<endl<<endl;
  
  
  cout<<" mysliceda uchragan elementlarni 3 tasini ";
  cout<<" 10 ga ko'paytirib hosil qilindi: "<<endl;
    foo[myslice] *= valarray<int>(10,3); //  0 10  2 30  4 50  6  7  8
      for (size_t n=0; n<foo.size(); n++)
    cout << ' ' << foo[n];
  cout <<endl<<endl;
  cout<<" o indexdan xar 3-elementga 3 ta 99 qo'sh : "<<endl;                                       //  |        |        |
  foo[slice (0,3,3)] = 99;             //  v        v        v
                                            // 99 10  2 99  4 50 99  7  8
  cout << "foo:";
  for (size_t n=0; n<foo.size(); n++)
    cout << ' ' << foo[n];
  cout << '\n';

  return 0;
}
