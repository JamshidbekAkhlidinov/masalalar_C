#include<bits/stdc++.h>

using namespace std;
long long term(string polyterm, long long val) {
   //to find the coefficient
   string coeffStr = "";
   int i;
   for (i = 0; polyterm[i] != 'x'; i++)
      coeffStr.push_back(polyterm[i]);
   long long coeff = atol(coeffStr.c_str());
   // to get the power value
   string powStr = "";
   for (i = i + 2; i != polyterm.size(); i++)
      powStr.push_back(polyterm[i]);
   long long power = atol(powStr.c_str());
   // For ax^n, we return a(n-1)x^(n-1)
   return coeff * power * pow(val, power - 1);
}
long long value(string& str, int val) {
   long long ans = 0;
   // using istringstream to get input in tokens
   istringstream is(str);
   string polyterm;
   while (is >> polyterm) {
      // check if the token is equal to '+' then
      // continue with the string
      if (polyterm == "+")
         continue;
         // Otherwise find the derivative of that
         // particular term
      else
         ans = (ans + term(polyterm, val));
   }
   return ans;
}
// main function
int main() {
   string str = "2x^3 + 1x^1 + 3x^2";
   int val = 2;
   cout << value(str, val);
   return 0;
}