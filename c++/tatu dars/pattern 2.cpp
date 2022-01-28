#include <iostream>
using namespace std; 
void pypart(int n)
{
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << j+1<<" ";
        }
        cout << endl;
    }
}
 
int main()
{
    int n = 9;
    pypart(n);
    return 0;
}
