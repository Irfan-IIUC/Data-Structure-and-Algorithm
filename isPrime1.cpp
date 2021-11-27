// prime number => 2, 3, 5, 7, 11 .....

#include<iostream>
using namespace std;

int main()
{
    int n=17, i;

    if(n<=1)
    {
        cout << n << " is not a prime number\n";
        return 0;
    }

    for(i=2; i<n; i++)
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
