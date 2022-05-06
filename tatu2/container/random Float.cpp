#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main() {
   srand((unsigned int)time(NULL));
   float a = 5.0;
   for (int i=0;i<20;i++)
      cout << (float(rand())/float((RAND_MAX)) * a) << endl;
}