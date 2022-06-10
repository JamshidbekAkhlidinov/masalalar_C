#include <valarray>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstddef> 
#include <ctime>

using namespace std;

int
main ()
{
  valarray < int >vl (105);
  int n;
  cout << "n= ";
  cin >> n;

  cout << "valarray toplam elementlari :\n";
  for (int i = 0; i < n; i++)
    {
      vl[i] = rand () % 15;
      cout << setw (4) << vl[i];
    }
  size_t start=0;
  size_t uzunlik[]={2,5};
  size_t qadam[]={3,3};
  gslice ajrat(start,valarray <size_t>(uzunlik,2),valarray <size_t>(qadam,10));
  vl[ajrat]=32;
  cout << "\n\ngslice: \n";
  for (size_t i = 0; i < vl.size (); i++)
    {
      cout << setw (4) << vl[i];
    }
  return 0;
}