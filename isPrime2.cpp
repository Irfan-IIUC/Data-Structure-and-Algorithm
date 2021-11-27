// prime number => 2, 3, 5, 7, 11 .....

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n=21, i, limit=sqrt(n);

    if(n<=1)
    {
        cout << n << " is not a prime number\n";
        return 0;
    }

    for(i=2; i<limit+1; i++)
    {
        if(n%i == 0)
        {
            cout << n << " is not a prime number\n";
            return 0;
        }
    }

    cout << n << " is a prime number\n";
    return 0;
}
