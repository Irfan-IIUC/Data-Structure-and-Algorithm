/*
    combinatorics - counting digits in factorial
    50! = 65 digits
*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n=50;
    double cnt=0;

    for(int i=1; i<=n; i++)
    {
        cnt = cnt + log10(i);
    }

    cnt = floor(cnt) + 1;

    cout << "Total digit in " << n << "! = " << cnt << endl;
    return 0;
}
