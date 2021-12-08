#include  <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 1;
    int num_temp;
    int num_next = 1;
    int n;
    cin >> n;
    if (n>=1)
        cout << num1 << " ";
    if (n>=2)
        cout << num2 << " ";
    for (int i = 0; i < n-2; i++){
        num_next = num1 + num2;
        cout << num_next << " ";
        num1 = num2;
        num2 = num_next;
    }
    cout << endl;
    return 0;
}
