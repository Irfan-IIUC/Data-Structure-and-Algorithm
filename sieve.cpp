// Prime number using sieve of eratosthenes method

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num[100], i, j, k, n, step;

    cout << "Enter the range: ";
    cin >> n;

    int limit = sqrt(n);

    for(i=0; i<=n; i++)
        num[i] = i+1;

    num[0] = 0; // 1 is not prime

    for(i=0; i<=limit; i++)
    {
        if(num[i] != 0)
        {
            k = (num[i]*2)-1;
            step = num[i];

            for(j=k; j<=n; j+=step)
                num[j] = 0;
        }
    }

    cout << "\nPrime numbers from 1 to " << n << " are: ";
    for(i=0; i<=n; i++)
    {
        if(num[i] != 0)
            cout << num[i] << " ";
    }

    cout << endl;

    return 0;
}
