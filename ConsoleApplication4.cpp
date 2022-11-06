
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int summ;
    summ = a + b + c;
    if (summ % 10 == 6 && summ % 2 == 0 || summ % 10 == 9 && summ % 2 != 0) {
        cout << summ << " magic";
    }
   
    else  {
        cout << summ << " NO magic";
    }
}

