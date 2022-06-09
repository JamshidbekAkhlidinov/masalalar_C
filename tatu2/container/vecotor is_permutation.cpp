#include <iostream>     
#include <algorithm>    
#include <array>        

int main () {
  std::array<int,5> foo = {1,2,3,4,5};
  std::array<int,6> bar = {3,1,4,5,2,0};

  if ( std::is_permutation (foo.begin(), foo.end(), bar.begin()) )
    std::cout << "foo va bar bir xil elementlarni o'z ichiga oladi.\n";

  return 0;
}