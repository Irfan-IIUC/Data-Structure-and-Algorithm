// GCD and LCM of 2 numbers

#include<iostream>
using namespace std;
int main()
{
    int a, b, t, gcd, lcm, a1, b1;
    cout << "Enter 2 number: ";
    cin >> a >> b;

    a1 = a;
    b1 = b;

    if(a==0)
        gcd = a;
    else if(b==0)
        gcd = b;
    else
    {
        while(b!=0)
        {
            t = b;
            b = a%b;
            a = t;
        }

        gcd = a;
    }

    cout << "\nGCD of " << a1 << " and " << b1 << " is: " << gcd << endl;
    cout << "LCM of " << a1 << " and " << b1 << " is: " << (a1*b1)/gcd << endl;

    return 0;
}
